using System.Collections;
using System.Collections.Generic;
using UnityEngine.SceneManagement;
using UnityEngine;
using System;

public class MainMenu2 : MonoBehaviour
{
	public string levelSelect;

	public int playerLives;
	public int playerHealth;





	void Start ()
	{
		FindObjectOfType <RealTimeCountdown> ().SetCountdown ();
	}


	void Update ()
	{
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
