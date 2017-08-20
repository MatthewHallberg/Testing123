using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FurnitureBehavior : MonoBehaviour {

	public GameObject RemoveButton,RotateButton,RotateImage, ParentObject;

	[HideInInspector]
	public bool buttonsActive = false;

	public Vector3 StartScale;

	private float yAngle = 1f;

	void Start(){

		transform.parent.localScale = StartScale;
		ActivateButtons (false);
	}

	// Update is called once per frame
	void Update () {

		if (RotateImage.activeSelf) {
			RotateImage.transform.eulerAngles += new Vector3 (0, yAngle, 0);
		}
	}

	public void ActivateButtons(bool active){
		buttonsActive = active;
		RemoveButton.SetActive (active);
		RotateButton.SetActive (active);
	}

	public void ActivateRotateImage(){

		RotateImage.SetActive (true);
		ActivateButtons (false);
		rotateRoutine = StartCoroutine (RotateRoutine ());
	}

	public void DeactivateRotateImage(){
		
		RotateImage.SetActive (false);
		StopCoroutine (rotateRoutine);
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
