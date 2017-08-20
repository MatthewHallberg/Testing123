using System;
using System.Collections;
using UnityEngine;
using System.Collections.Generic;
using UnityEngine.EventSystems;

namespace UnityEngine.XR.iOS
{
	public class UnityARHitTestExample : MonoBehaviour
	{
		[HideInInspector]
		public static bool shouldDetectTouch = false;

		public Transform m_HitTransform;
		public GameObject Chair, Couch, Carpet, ChairSmall, Table;

		private GameObject lastSelectedObject;

		public enum Selected {Chair, Couch, ChairSmall, Table, Carpet, CameraButton, Nothing};

		public static Selected currentSelected;

		private bool shouldPlaceObject = true;

		private bool objectWasMoved = false;
		private bool objectWasRotated = false;
		private Vector3 mouseStartPosition;

		bool HitTestWithResultType (ARPoint point, ARHitTestResultType resultTypes, Transform desiredTransform)
		{
			List<ARHitTestResult> hitResults = UnityARSessionNativeInterface.GetARSessionNativeInterface ().HitTest (point, resultTypes);
			if (hitResults.Count > 0) {
				foreach (var hitResult in hitResults) {
					desiredTransform.position = UnityARMatrixOps.GetPosition (hitResult.worldTransform);
					desiredTransform.rotation = UnityARMatrixOps.GetRotation (hitResult.worldTransform);
					Debug.Log (string.Format ("x:{0:0.######} y:{1:0.######} z:{2:0.######}", m_HitTransform.position.x, m_HitTransform.position.y, m_HitTransform.position.z));
					return true;
				}
			}
			return false;
		}

		void PlaceNewObject(GameObject newObject, ARPoint point, ARHitTestResultType[] resultTypes, bool shouldRotate){

			newObject.transform.localPosition = Vector3.zero;
			newObject.transform.GetChild (0).GetComponent<FurnitureBehavior> ().Init ();

			if (shouldRotate) {
				newObject.transform.rotation = Quaternion.Euler (Vector3.zero);
			}

			foreach (ARHitTestResultType resultType in resultTypes)
			{
				if (HitTestWithResultType (point, resultType,newObject.transform))
				{
					return;
				}
			}
		}

		// Update is called once per frame
		void Update () {

			if (Input.GetMouseButtonDown (0)) {

				shouldDetectTouch = true;
				objectWasMoved = false;
				mouseStartPosition = Input.mousePosition;

				//get current selected object
				RaycastHit hit; 
				Ray ray = Camera.main.ScreenPointToRay (Input.mousePosition); 
				if (Physics.Raycast (ray, out hit, 1000f)) {

					Debug.Log ("NAME: " + hit.transform.name);

					if (hit.transform.tag == "Selectable") {
						lastSelectedObject = hit.transform.gameObject;
					}
				}
			}

			if (Input.touchCount > 1) {

				shouldDetectTouch = false;
				objectWasRotated = true;
			}

			//if dragging
			if (shouldDetectTouch && Input.GetMouseButton (0) && Input.mousePosition != mouseStartPosition && lastSelectedObject != null) {
				objectWasMoved = true;

				var screenPosition = Camera.main.ScreenToViewportPoint (Input.mousePosition);

				ARPoint point = new ARPoint {
					x = screenPosition.x,
					y = screenPosition.y
				};

				// prioritize reults types
				ARHitTestResultType[] resultTypes = {
					ARHitTestResultType.ARHitTestResultTypeExistingPlaneUsingExtent, 
					ARHitTestResultType.ARHitTestResultTypeHorizontalPlane, 
					ARHitTestResultType.ARHitTestResultTypeVerticalPlane, 
					ARHitTestResultType.ARHitTestResultTypeFeaturePoint
				}; 

				PlaceNewObject (lastSelectedObject, point, resultTypes, false);
			}

			if (shouldDetectTouch && Input.GetMouseButtonUp(0)){

				if (currentSelected == Selected.CameraButton) {
					MenuBehavior.Instance.CameraButtonUp ();
				}

				if (!EventSystem.current.IsPointerOverGameObject (0)) {
					shouldPlaceObject = true;

					RaycastHit hit; 
					Ray ray = Camera.main.ScreenPointToRay (Input.mousePosition); 
					if (Physics.Raycast (ray, out hit, 1000f)) {

						Debug.Log ("NAME: " + hit.transform.name);

						if (hit.transform.tag == "Selectable") {
							shouldPlaceObject = false;

							if (hit.transform.GetChild (0).GetComponent<FurnitureBehavior> ().buttonsActive) {
								hit.transform.GetChild (0).GetComponent<FurnitureBehavior> ().ActivateButtons (false);
							} else {
								hit.transform.GetChild (0).GetComponent<FurnitureBehavior> ().ActivateButtons (true);
							}

						} else if (hit.transform.tag == "Remove") {
							shouldPlaceObject = false;
							Destroy (hit.transform.parent.transform.parent.GetComponent<FurnitureBehavior> ().ParentObject);
						} else if (hit.transform.tag == "Rotate") {
							shouldPlaceObject = false;
							hit.transform.parent.transform.parent.GetComponent<FurnitureBehavior> ().ActivateRotateImage ();
							lastSelectedObject = hit.transform.parent.transform.parent.GetComponent<FurnitureBehavior> ().ParentObject;
							lastSelectedObject.GetComponent<RotateBehavior> ().shouldDetectRotate = true;
						}
					}
						if (shouldPlaceObject) {

							var screenPosition = Camera.main.ScreenToViewportPoint (Input.mousePosition);

							ARPoint point = new ARPoint {
								x = screenPosition.x,
								y = screenPosition.y
							};

							// prioritize reults types
							ARHitTestResultType[] resultTypes = {
								ARHitTestResultType.ARHitTestResultTypeExistingPlaneUsingExtent, 
								ARHitTestResultType.ARHitTestResultTypeHorizontalPlane, 
								ARHitTestResultType.ARHitTestResultTypeVerticalPlane, 
								ARHitTestResultType.ARHitTestResultTypeFeaturePoint
							}; 

							if (currentSelected == Selected.Chair) {
								GameObject newObject = Instantiate (Chair, this.transform);
								PlaceNewObject (newObject, point, resultTypes, true);
							}

							if (currentSelected == Selected.Couch) {
								GameObject newObject = Instantiate (Couch, this.transform);
								PlaceNewObject (newObject, point, resultTypes, true);
							}

							if (currentSelected == Selected.Table) {
								GameObject newObject = Instantiate (Table, this.transform);
								PlaceNewObject (newObject, point, resultTypes, true);
							}

							if (currentSelected == Selected.ChairSmall) {
								GameObject newObject = Instantiate (ChairSmall, this.transform);
								PlaceNewObject (newObject, point, resultTypes, true);
							}

							if (currentSelected == Selected.Carpet) {
								GameObject newObject = Instantiate (Carpet, this.transform);
								PlaceNewObject (newObject, point, resultTypes, true);
							}
						}
					}
				}
				if (objectWasRotated && Input.GetMouseButtonUp (0)) {
					objectWasRotated = false;
					if (lastSelectedObject != null) {
						lastSelectedObject.transform.GetChild (0).GetComponent<FurnitureBehavior> ().ActivateButtons (true);
						lastSelectedObject.transform.GetChild (0).GetComponent<FurnitureBehavior> ().DeactivateRotateImage ();
						lastSelectedObject.GetComponent<RotateBehavior> ().shouldDetectRotate = false;
					}
				}
			}
		}
	}
