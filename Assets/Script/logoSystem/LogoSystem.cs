using UnityEngine;
using System.Collections;

public class LogoSystem : MonoBehaviour {
	private int waitTime;

	void Start () {
		waitTime = 7;
		StartCoroutine ("LogoTimer");
	}

	private IEnumerator LogoTimer(){
		yield return new WaitForSeconds(waitTime);
		toScene ();
	}

	private void toScene(){
		Debug.Log ("moveScene");
		Application.LoadLevel ("Game");
	}
	
}