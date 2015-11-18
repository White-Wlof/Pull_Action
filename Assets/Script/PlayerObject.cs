using UnityEngine;
using System.Collections;

public class PlayerObject : MonoBehaviour {
	private float yPosition;
	private Vector3 startPos;
	private Vector3 movePos;
	private Vector3 endPos;
	private Vector2 force;
	private Vector2 gravity;
	private Vector2 moveForce;
	private Vector2 forceStorage;
	private Rigidbody2D Rig;
	private GameObject arrayObject;
	private GameMain gm;

	void Awake(){
		gm = GameObject.FindGameObjectWithTag ("GameMain").GetComponent<GameMain> ();
		Rig = this.GetComponent<Rigidbody2D> ();
		arrayObject = this.transform.FindChild ("array").gameObject;
		arrayObject.SetActive (false);
	}

	void Start () {
		yPosition = 0f;
		forceStorage = Vector2.zero;
		gravity = new Vector2 (0, -1);
	}

	void Update () {
		if (!gm.getIsGameOverFlag()) {
			if (gm.getIsPlayFlag()) {
				if(!gm.getIsStopFlag()){
					if(forceStorage != Vector2.zero){
						Rig.velocity = forceStorage;
						forceStorage = Vector2.zero;
					}
					Rig.AddForce(gravity);
					if (Input.GetMouseButton(0)) {
						movePos = Camera.main.ScreenToWorldPoint (Input.mousePosition);
						moveForce = new Vector2 (startPos.x - movePos.x, startPos.y - movePos.y);
						if(moveForce != Vector2.zero){
							if(moveForce.x > 0){
								arrayObject.transform.rotation = Quaternion.Euler(0,0,(Mathf.Atan(moveForce.y/moveForce.x) * 180 / Mathf.PI) - 90);
							}else{
								arrayObject.transform.rotation = Quaternion.Euler(0,0,(Mathf.Atan(moveForce.y/moveForce.x) * 180 / Mathf.PI) + 90);
							}
						}
					}
					
					if (Input.GetMouseButtonDown (0)) {
						startPos = Camera.main.ScreenToWorldPoint (Input.mousePosition);
						arrayObject.SetActive (true);
					} else if (Input.GetMouseButtonUp (0)) {
						endPos = Camera.main.ScreenToWorldPoint (Input.mousePosition);
						force = new Vector2 (startPos.x - endPos.x, startPos.y - endPos.y);
						Rig.AddForce (force * 2000 * Time.deltaTime);
						arrayObject.SetActive (false);
					}
					
					yPosition = this.gameObject.transform.position.y;
					if(yPosition > 5f || yPosition < -5f){
						Destroy(this.gameObject);
						gm.setIsGameOverFlag(true);
						Debug.Log("GameOver");
					}
				}else{
					if(Rig.velocity != Vector2.zero){
						forceStorage = Rig.velocity;
						Rig.velocity = Vector2.zero;
						arrayObject.SetActive (false);
					}
				}
			}
		}
	}
}
