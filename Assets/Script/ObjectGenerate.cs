using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class ObjectGenerate : MonoBehaviour {
	private float waitTime;
	private int objectID;
	private List<GameObject> objectList;
	private string[] objectNameArray;
	private Vector3 startPosition;
	private Vector3 startObjectPosition;
	private GameObject enemys;
	private GameMain gm;

	void Awake(){
		objectNameArray = new string[]{"Player", "FallingOnes", "FallingOnes2"};
		startPosition = new Vector3 (0, 0, 0);
		startObjectPosition = new Vector3 (0, 6, 0);
		objectList = new List<GameObject>();
		getObjectList ();
		enemys = GameObject.FindGameObjectWithTag("Enemys");
		gm = GameObject.FindGameObjectWithTag ("GameMain").GetComponent<GameMain> ();
	}

	void getObjectList(){
		foreach(string s in objectNameArray){
			objectList.Add ((GameObject)Resources.Load("Prefabs/" + s));
		}
	}

	void Start () {
		waitTime = 0.5f;
		objectID = 0;
		StartCoroutine ("generateTimer");
		Instantiate (objectList[0], startPosition, Quaternion.identity);
	}

	private IEnumerator generateTimer(){
		yield return new WaitForSeconds(waitTime);
		if (!gm.getIsGameOverFlag ()) {
			if (gm.getIsPlayFlag ()) {
				if (!gm.getIsStopFlag ()) {
					waitTime = Random.Range (0f, 1f);
					objectID = Random.Range (1, objectList.Count);
					if(gm.getScore() < 20000){
						objectID = 1;
					}
					Debug.Log ("objectID:" + objectID);
					startObjectPosition.x = Random.Range (-2f, 2f);
					GameObject obj = (GameObject)Instantiate (objectList [objectID], startObjectPosition, Quaternion.identity);
					obj.transform.parent = enemys.transform;
				} else {
					waitTime = 0f;
				}
				StartCoroutine ("generateTimer");
			}
		} else {
			enemys.transform.DetachChildren();
		}
	}
}
