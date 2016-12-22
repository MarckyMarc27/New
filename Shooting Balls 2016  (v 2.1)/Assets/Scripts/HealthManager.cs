using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class HealthManager : MonoBehaviour
{
	public int maxPlayerHealth;

	public static int playerHealth;

	public Slider healthUI;
	PlayerController thePlayer;

	public Text text;




	void Start ()
	{
		healthUI = GameObject.Find ("HealthSlider").GetComponent <Slider> ();
		thePlayer = FindObjectOfType <PlayerController> ();

		//playerHealth = maxPlayerHealth;
		playerHealth = PlayerPrefs.GetInt ("PlayerMaxHealth");
		text = GameObject.Find ("HealthText").GetComponent <Text> ();
	}
		

	void Update ()
	{
		healthUI.maxValue = maxPlayerHealth;
		healthUI.value = playerHealth;

		text.text = "" + playerHealth + "%";
		
		if (playerHealth <= 0)
		{
			StartCoroutine (thePlayer.KillThePlayerAndRestartTheGame ());
		}
		//text.text = "Health: " + playerHealth;
	}


	public static void HurtPlayer (int damageToGive)
	{
		playerHealth = playerHealth - damageToGive;
		PlayerPrefs.SetInt ("PlayerCurrentHealth", playerHealth);
	}


	public void SetMaxHealth ()
	{
		playerHealth = PlayerPrefs.GetInt ("PlayerMaxHealth");
	}

}
