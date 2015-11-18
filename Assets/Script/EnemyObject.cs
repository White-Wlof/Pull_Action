using UnityEngine;
using System.Collections;

public class EnemyObject : MonoBehaviour {
	private Vector2 force;
	private Vector2 forceStorage;
	private float yPosition;
	private GameMain gm;
	private Rigidbody2D Rig;

	void Awake(){
		gm = GameObject.FindGameObjectWithTag ("GameMain").GetComponent<GameMain> ();
		Rig = GetComponent<Rigidbody2D> ();
	}

	void Start () {
		yPosition = 0f;
		forceStorage = Vector2.zero;
		force = new Vector2 (0, Random.Range(-50000, -100000));
		Debug.Log (force.y);
		this.gameObject.GetComponent<Rigidbody2D> ().AddForce (force * Time.deltaTime);
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
					yPosition = this.gameObject.transform.position.y;
					if (yPosition > 6.5f) {
						Destroy (this.gameObject);
					} else if (yPosition < -6.5f) {
						gm.addScore(5);
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
