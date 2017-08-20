using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RotateBehavior : MonoBehaviour {

	private const int sensitivity = 20;
	private float originalDiff = 0;
	private float currentDiff = 0;
	private float originalZ;
	private bool differenceSet = false;
	[HideInInspector]
	public bool shouldDetectRotate = false;

	// Update is called once per frame
	void Update () {

		//rotate T on double touch
		if (shouldDetectRotate && Input.touchCount > 1) {

			print ("ROTATING");

			Touch[] touches = Input.touches;

			Vector2 p1 = touches [0].position;
			Vector2 p2 = touches [1].position;

			Vector3 diff = p2 - p1;

			if (!differenceSet) {
				differenceSet = true;
				originalDiff = Mathf.Atan2 (diff.y, diff.x);
			} else {
				currentDiff = Mathf.Atan2 (diff.y, diff.x);
				transform.localRotation = Quaternion.Euler(transform.localEulerAngles.x,
					transform.localEulerAngles.y + 
					((currentDiff - originalDiff) * (Mathf.Rad2Deg/sensitivity)),
					transform.localEulerAngles.z);
			}
		}

		if (Input.touchCount < 2) {
			differenceSet = false;
			//shouldDetectRotate = false;
		}
	}
}
