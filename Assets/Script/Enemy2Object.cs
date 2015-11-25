using UnityEngine;
using System.Collections;

public class Enemy2Object : MonoBehaviour {
	private Vector2 force;
	private Vector2 forceStorage;
	private float yPosition;
	private GameMain gm;
	private Rigidbody2D Rig;
	private GameObject Player;
	private Vector2 Traceforce;
	
	void Awake(){
		gm = GameObject.FindGameObjectWithTag ("GameMain").GetComponent<GameMain> ();
		Player = GameObject.FindGameObjectWithTag ("Player");
		Rig = this.transform.GetComponent<Rigidbody2D> ();
	}
	
	void Start () {
		yPosition = 0f;
		forceStorage = Vector2.zero;
		Traceforce = Vector2.zero;
		force = new Vector2 (0, Random.Range(-20000, -70000));
		Debug.Log (force.y);
		Rig.AddForce (force * Time.deltaTime);
	}
	
	void Update () {
		if(this.transform.parent == null){
			Destroy(this.gameObject);
		}
		if (!gm.getIsGameOverFlag()) {
			if (gm.getIsPlayFlag()) {
				if(!gm.getIsStopFlag()){
					if(forceStorage != Vector2.zero){
						Rig.velocity = forceStorage;
						forceStorage = Vector2.zero;
					}
					if(this.transform.position.y > Player.transform.position.y + 0.5f){
						if(this.transform.position.x > Player.transform.position.x + 0.3f && Rig.velocity.x >= 0){
							Rig.velocity = new Vector2(0, Rig.velocity.y);
							Traceforce.x = -100;
							Rig.AddForce(Traceforce);
						}else if(this.transform.position.x < Player.transform.position.x - 0.3f && Rig.velocity.x <= 0){
							Rig.velocity = new Vector2(0, Rig.velocity.y);
							Traceforce.x = 100;
							Rig.AddForce(Traceforce);
						}else if(this.transform.position.x >= Player.transform.position.x - 0.3f && this.transform.position.x <= Player.transform.position.x + 0.3f){
							Rig.velocity = new Vector2(0, Rig.velocity.y);
						}
					}else{
						Rig.velocity = new Vector2(0, Rig.velocity.y);
					}

					yPosition = this.gameObject.transform.position.y;
					if (yPosition > 6.5f) {
						Destroy (this.gameObject);
					} else if (yPosition < -6.5f) {
						gm.addScore(10);
						Destroy (this.gameObject);
					}
				}else{
					if(Rig.velocity != Vector2.zero){
						forceStorage = Rig.velocity;
						Rig.velocity = Vector2.zero;
					}
				}
			}
		}
	}
}