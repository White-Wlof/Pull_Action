using UnityEngine;
using System.Collections;

public class WallObject : MonoBehaviour {
	private GameMain gm;

	void Awake(){
		gm = GameObject.FindGameObjectWithTag ("GameMain").GetComponent<GameMain> ();
	}

	void  OnCollisionEnter2D(Collision2D col){
		if (!gm.getIsGameOverFlag()) {
			if (gm.getIsPlayFlag()) {
				if(!gm.getIsStopFlag()){
					if(col.transform.tag.Equals("Player")){
						gm.addScore(gm.getCount() * -2);
					}
				}
			}
		}
	}
}
