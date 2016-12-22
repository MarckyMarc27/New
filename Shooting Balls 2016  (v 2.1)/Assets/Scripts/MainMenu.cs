using System.Collections;
using System.Collections.Generic;
using UnityEngine.SceneManagement;
using UnityEngine;
using System;

public class MainMenu : MonoBehaviour
{
	public string startLevel;
	public string levelSelect;

	public int playerLives;
	public int playerHealth;

	//RealTimeCountdown countDown;

	//DateTime target;




	void Start ()
	{
		FindObjectOfType <RealTimeCountdown> ().SetCountdown ();
	}


	void Update ()
	{
		//countDown.ActiveCountdown ();
		//countDown.SetCountdown ();
	}


	public void NewGame ()
	{
		SceneManager.LoadScene (startLevel);

		PlayerPrefs.SetInt ("PlayerCurrentLives", playerLives);
		PlayerPrefs.SetInt ("CurrentPlayerScore", 0);

		PlayerPrefs.SetInt ("PlayerCurrentHealth", playerHealth);
		PlayerPrefs.SetInt ("PlayerMaxHealth", playerHealth);
	}


	public void LevelSelect ()
	{
		PlayerPrefs.SetInt ("PlayerCurrentLives", playerLives);

		PlayerPrefs.SetInt ("PlayerCurrentHealth", playerHealth);
		PlayerPrefs.SetInt ("PlayerMaxHealth", playerHealth);

		PlayerPrefs.SetInt ("CurrentPlayerScore", 0);

		SceneManager.LoadScene (levelSelect);
	}


	public void QuitGame ()
	{
		Application.Quit ();
	}

}
