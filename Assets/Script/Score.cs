using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class Score : MonoBehaviour {
	private Text textObject;
	private GameMain gm;

	void Awake(){
		textObject = this.GetComponent<Text> ();
		gm = GameObject.FindGameObjectWithTag ("GameMain").GetComponent<GameMain> ();
	}

	void Start () {
		textObject.text = "0";
	}

	void Update () {
		if(gm.getIsPlayFlag()){
			textObject.text = gm.getScore ().ToString();
		}
	}
}
