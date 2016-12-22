using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class TimeManager : MonoBehaviour
{
	public float startingTime;
	float countingTime;

	Text theText;
	PlayerController thePlayer;




	void Start ()
	{
		thePlayer = FindObjectOfType <PlayerController> ();
		theText = GetComponent <Text> ();

		countingTime = startingTime;
	}


	void Update ()
	{
		if (countingTime <= 0)
		{
			StartCoroutine (thePlayer.KillThePlayerAndRestartTheGame ());
		}

		countingTime -= Time.deltaTime;

		theText.text = "Time: " + Mathf.Round (countingTime);

		if (countingTime < 0)
			countingTime = 0;
	}


	public void ResetTime ()
	{
		countingTime = startingTime;
	}

}
