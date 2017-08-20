using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

namespace UnityEngine.XR.iOS
{
	public class MenuBehavior : MonoBehaviour {

		private static MenuBehavior _instance;

		public static MenuBehavior Instance { get { return _instance; } }

		public Transform Chair, Couch, Carpet, ChairSmall, Table, CameraButton, Canvas, FurnitureParent;

		public List <Transform> leftButtons = new List<Transform>();

		public Color selectedColor, normalColor;
	
		private Vector3 scaleUp = new Vector3 (.2f, .2f, 0);

		private GameObject[] Hideable;

		public GameObject particleMaker, planeMaker;

		void Start(){

			_instance = this;

			ResetButtons ();
			ButtonPressed (Chair);
			UnityARHitTestExample.Instance.currentSelected = UnityARHitTestExample.Selected.Chair;
		}

		public void ResetButtons(){
			UnityARHitTestExample.Instance.currentSelected = UnityARHitTestExample.Selected.Nothing;
			//reset all other buttons
			foreach (Transform child in leftButtons) {
				if (child.localScale.x > 1.01f) {
					child.GetComponent<Image> ().color = normalColor;
					child.localScale -= scaleUp;
				}
			}
		}

		public void CameraButtonDown(){
			RightMenuBehavior.Instance.CloseMenu ();
			UnityARHitTestExample.Instance.shouldDetectTouch = false;
			ResetButtons ();
			UnityARHitTestExample.Instance.currentSelected = UnityARHitTestExample.Selected.CameraButton;
			foreach (Transform child in Canvas.transform) {
				child.gameObject.SetActive (false);
			}
			foreach (Transform child in FurnitureParent) {
				child.GetChild (0).GetComponent<FurnitureBehavior> ().ActivateButtons (false);
			}
				
			Hideable = GameObject.FindGameObjectsWithTag("Hideable");

			foreach (GameObject go in Hideable){
				go.SetActive (false);
			}
			planeMaker.SetActive (false);
			particleMaker.SetActive (false);
		}

		public void CameraButtonUp(){

			ResetButtons ();
			UnityARHitTestExample.Instance.currentSelected = UnityARHitTestExample.Selected.Nothing;
			foreach (Transform child in Canvas.transform) {
				child.gameObject.SetActive (true);
			}
			RightMenuBehavior.Instance.CloseMenu ();
			foreach (GameObject go in Hideable){
				go.SetActive (true);
			}
			planeMaker.SetActive (true);
			particleMaker.SetActive (true);
		}

		public void ChairButtonDown(){

			ResetButtons ();
			ButtonPressed (Chair);
			UnityARHitTestExample.Instance.currentSelected = UnityARHitTestExample.Selected.Chair;

		}

		public void CouchButtonDown(){

			ResetButtons ();
			ButtonPressed (Couch);
			UnityARHitTestExample.Instance.currentSelected = UnityARHitTestExample.Selected.Couch;
		}

		public void ChairSmallButtonDown(){

			ResetButtons ();
			ButtonPressed (ChairSmall);
			UnityARHitTestExample.Instance.currentSelected = UnityARHitTestExample.Selected.ChairSmall;
		}

		public void TableButtonDown(){

			ResetButtons ();
			ButtonPressed (Table);
			UnityARHitTestExample.Instance.currentSelected = UnityARHitTestExample.Selected.Table;
		}

		public void CarpetButtonDown(){

			ResetButtons ();
			ButtonPressed (Carpet);
			UnityARHitTestExample.Instance.currentSelected = UnityARHitTestExample.Selected.Carpet;
		}

		void ButtonPressed(Transform desiredTransform){
			//scale buttons to show when they are selected
			UnityARHitTestExample.Instance.shouldDetectTouch = false;
			desiredTransform.GetComponent<Image> ().color = selectedColor;
			desiredTransform.localScale += scaleUp;
			desiredTransform.SetAsLastSibling ();
		}
	}
}