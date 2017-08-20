using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FurnitureBehavior : MonoBehaviour {

	public GameObject SelectedImage,RotateImage, ParentObject;

	public List<GameObject> objectsToColor = new List<GameObject>();

	public List<Color> colorList = new List<Color>();

	[HideInInspector]
	public bool buttonsActive = false;

	public Vector3 StartScale;

	private float yAngle = 1f;

	// Update is called once per frame
	void Update () {

		if (RotateImage.activeSelf) {
			RotateImage.transform.eulerAngles += new Vector3 (0, yAngle, 0);
		}
	}

	public void Init(){
		transform.parent.localScale = StartScale;
		ActivateButtons (false);
	}

	public void ActivateButtons(bool active){
		buttonsActive = active;
		SelectedImage.SetActive (active);
		if (!active) {
			DeactivateRotateImage ();
			transform.parent.GetComponent<RotateBehavior> ().shouldDetectRotate = false;
		}
	}

	public void ActivateRotateImage(){

		ActivateButtons (false);
		RotateImage.SetActive (true);
		rotateRoutine = StartCoroutine (RotateRoutine ());
	}

	public void DeactivateRotateImage(){
		
		RotateImage.SetActive (false);
		if (rotateRoutine != null) {
			StopCoroutine (rotateRoutine);
		}
	}

	Coroutine rotateRoutine;
	IEnumerator RotateRoutine(){
		RotateImage.transform.eulerAngles = new Vector3 (90, 0, 0);
		while (true) {
			yAngle = 1f;
			yield return new WaitForSeconds (1f);
			yAngle = -1f;
			yield return new WaitForSeconds (1f);
		}
	}
}
