using UnityEngine;
using System.Collections;

public class GameMain : MonoBehaviour {
	private bool isPlayFlag;
	private bool isGameOverFlag;
	private bool isStopFlag;
	private int count;
	private int desCount;
	private int score;
	private GameObject generatorObject;

	void Awake(){
		generatorObject = (GameObject)Resources.Load ("Prefabs/ObjectGenerate");
	}

	void Start () {
		score = 0;
		count = 4;
		desCount = 5;
		isPlayFlag = false;
		isGameOverFlag = false;
		isStopFlag = false;
		StartCoroutine ("startTimer");
	}

	public void startTime(){
		StartCoroutine ("startTimer");
	}

	private IEnumerator startTimer(){
		yield return new WaitForSeconds(1);
		if (!isGameOverFlag) {
			if (!isPlayFlag) {
				count--;
				if (count == 0) {
					Debug.Log ("Start");
					setIsPlayFlag (true);
					Instantiate (generatorObject);
				} else {
					Debug.Log (count);
				}
				StartCoroutine ("startTimer");
			} else {
				if(!isStopFlag){
					count++;
					addScore (count);
					StartCoroutine ("startTimer");
				}
			}
		} else {
			desCount--;
			if(desCount == 0){
				Debug.Log("moveScoreScene");
			}
			StartCoroutine ("startTimer");
		}
	}

	public void setIsPlayFlag(bool b){
		isPlayFlag = b;
	}

	public bool getIsPlayFlag(){
		return isPlayFlag;
	}

	public void setIsGameOverFlag(bool b){
		isGameOverFlag = b;
	}
	
	public bool getIsGameOverFlag(){
		return isGameOverFlag;
	}

	public void setIsStopFlag(bool b){
		isStopFlag = b;
	}
	
	public bool getIsStopFlag(){
		return isStopFlag;
	}

	public void addScore(int n){
		score += n;
	}

	public int getScore(){
		return score;
	}
}
