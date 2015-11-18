using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;

public class Stop : MonoBehaviour {
	private GameMain gm;
	private string[] spriteNameArray;
	private List<Sprite> spriteList;
	private Image image;

	void Awake(){
		gm = GameObject.FindGameObjectWithTag ("GameMain").GetComponent<GameMain> ();
		spriteNameArray = new string[]{"play","stop","restart"};
		image = this.GetComponent<Image> ();
	}

	void Start(){
		spriteList = new List<Sprite> ();
		setSpriteList ();
		image.sprite = spriteList[1];
	}

	private void setSpriteList(){
		Debug.Log(spriteNameArray.Length);
		foreach(string s in spriteNameArray){
			spriteList.Add(GetSprite("Materials", s));
		}
	}

	private Sprite GetSprite (string fileName, string spriteName)
	{
		Sprite[] sprites = Resources.LoadAll<Sprite> (fileName);
		return System.Array.Find<Sprite> (sprites, (sprite) => sprite.name.Equals (spriteName));
	}

	public void stop(){
		if (!gm.getIsGameOverFlag ()) {
			if (gm.getIsPlayFlag ()) {
				if (!gm.getIsStopFlag ()) {
					gm.setIsStopFlag (true);
					image.sprite = spriteList[0];
				} else {
					gm.setIsStopFlag (false);
					image.sprite = spriteList[1];
					gm.startTime();
				}
			}
		}
	}
}
