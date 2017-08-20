using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace UnityEngine.XR.iOS
{
	public class RightMenuBehavior : MonoBehaviour {

		private static RightMenuBehavior _instance;

		public static RightMenuBehavior Instance { get { return _instance; } }

		private Vector3 desiredPosition = Vector3.zero;
		private Vector3 OpenPosition = new Vector3(304f,-44f,0);
		private Vector3 ClosePosition;


		// Use this for initialization
		void Start () {
			_instance = this;
			ClosePosition = transform.localPosition;
		}
		
		// Update is called once per frame
		void Update () {

			if (desiredPosition != Vector3.zero) {
				transform.localPosition = Vector3.Lerp (transform.localPosition, desiredPosition, 7f * Time.deltaTime);
			}
		}

		public void XButtonDown(){
			UnityARHitTestExample.Instance.shouldDetectTouch = false;
			Destroy (UnityARHitTestExample.Instance.lastSelectedObject);
			CloseMenu ();
		}

		public void RotateButtonDown(){
			UnityARHitTestExample.Instance.shouldDetectTouch = false;
			GameObject selectedObject = UnityARHitTestExample.Instance.lastSelectedObject;
			selectedObject.transform.GetChild(0).GetComponent<FurnitureBehavior> ().ActivateRotateImage ();
			selectedObject.GetComponent<RotateBehavior> ().shouldDetectRotate = true;
			print ("ROTATEIMAGE");
		}

		public void Color1Button(){
			UnityARHitTestExample.Instance.shouldDetectTouch = false;
			GameObject selectedObject = UnityARHitTestExample.Instance.lastSelectedObject;
			FurnitureBehavior furnitureBehavior = selectedObject.transform.GetChild (0).GetComponent<FurnitureBehavior> ();
			foreach (GameObject go in furnitureBehavior.objectsToColor) {
				go.GetComponent<Renderer> ().material.color = furnitureBehavior.colorList [0];
			}
		}

		public void Color2Button(){
			UnityARHitTestExample.Instance.shouldDetectTouch = false;
			GameObject selectedObject = UnityARHitTestExample.Instance.lastSelectedObject;
			FurnitureBehavior furnitureBehavior = selectedObject.transform.GetChild (0).GetComponent<FurnitureBehavior> ();
			foreach (GameObject go in furnitureBehavior.objectsToColor) {
				go.GetComponent<Renderer> ().material.color = furnitureBehavior.colorList [1];
			}		
		}

		public void Color3Button(){
			UnityARHitTestExample.Instance.shouldDetectTouch = false;
			GameObject selectedObject = UnityARHitTestExample.Instance.lastSelectedObject;
			FurnitureBehavior furnitureBehavior = selectedObject.transform.GetChild (0).GetComponent<FurnitureBehavior> ();
			foreach (GameObject go in furnitureBehavior.objectsToColor) {
				go.GetComponent<Renderer> ().material.color = furnitureBehavior.colorList [2];
			}
		}

		public void Color4Button(){
			UnityARHitTestExample.Instance.shouldDetectTouch = false;
			GameObject selectedObject = UnityARHitTestExample.Instance.lastSelectedObject;
			FurnitureBehavior furnitureBehavior = selectedObject.transform.GetChild (0).GetComponent<FurnitureBehavior> ();
			foreach (GameObject go in furnitureBehavior.objectsToColor) {
				go.GetComponent<Renderer> ().material.color = furnitureBehavior.colorList [3];
			}
		}

		public void OpenMenu(){

			desiredPosition = OpenPosition;
		}

		public void CloseMenu(){

			desiredPosition = ClosePosition;
		}
	}
}
