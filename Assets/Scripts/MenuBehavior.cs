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

		public Color selectedColor, normalColor;
	
		private Vector3 scaleUp = new Vector3 (.2f, .2f, 0);

		void Start(){

			_instance = this;

			ResetButtons ();
			ButtonPressed (Chair);
			UnityARHitTestExample.currentSelected = UnityARHitTestExample.Selected.Chair;
		}

		private void ResetButtons(){
			//reset all other buttons
			foreach (Transform child in this.transform) {
				if (child.localScale.x > 1.01f) {
					child.GetComponent<Image> ().color = normalColor;
					child.localScale -= scaleUp;
				}
			}
		}

		public void CameraButtonDown(){
			UnityARHitTestExample.shouldDetectTouch = false;
			ResetButtons ();
			UnityARHitTestExample.currentSelected = UnityARHitTestExample.Selected.CameraButton;
			foreach (Transform child in Canvas.transform) {
				child.gameObject.SetActive (false);
			}
			foreach (Transform child in FurnitureParent) {
				child.GetChild (0).GetComponent<FurnitureBehavior> ().ActivateButtons (false);
			}
		}

		public void CameraButtonUp(){

			ResetButtons ();
			UnityARHitTestExample.currentSelected = UnityARHitTestExample.Selected.Nothing;
			foreach (Transform child in Canvas.transform) {
				child.gameObject.SetActive (true);
			}
		}

		public void ChairButtonDown(){

			ResetButtons ();
			ButtonPressed (Chair);
			UnityARHitTestExample.currentSelected = UnityARHitTestExample.Selected.Chair;

		}

		public void CouchButtonDown(){

			ResetButtons ();
			ButtonPressed (Couch);
			UnityARHitTestExample.currentSelected = UnityARHitTestExample.Selected.Couch;

		}

		public void PictureButtonDown(){

			ResetButtons ();
			ButtonPressed (Picture);
			UnityARHitTestExample.currentSelected = UnityARHitTestExample.Selected.Picture;

		}

		public void CarpetButtonDown(){

			ResetButtons ();
			ButtonPressed (Carpet);
			UnityARHitTestExample.currentSelected = UnityARHitTestExample.Selected.Carpet;

		}

		void ButtonPressed(Transform desiredTransform){
			//scale buttons to show when they are selected
			UnityARHitTestExample.shouldDetectTouch = false;
			desiredTransform.GetComponent<Image> ().color = selectedColor;
			desiredTransform.localScale += scaleUp;
			desiredTransform.SetAsLastSibling ();
		}
	}
}