using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class LifeManager : MonoBehaviour
{
	public PlayerController thePlayer;
	HealthManager healthManager;



	public GameObject gameOverScreen;

	public float waitAfterGameOver;

	int lifeCounter;
	Text theText;

	//public int startingLives;






	void Start ()
	{
		//Time.timeScale = 1f;
		
		thePlayer = FindObjectOfType <PlayerController> ();
		healthManager = FindObjectOfType <HealthManager> ();


		theText = GetComponent <Text> ();

		gameOverScreen.SetActive (false);

		lifeCounter = PlayerPrefs.GetInt ("PlayerCurrentLives");
	}


	void Update ()
	{
		if (lifeCounter < 0)
			lifeCounter = 0;
		
		if (lifeCounter <= 0)
		{
			lifeCounter = 0;
			gameOverScreen.SetActive (true);
			thePlayer.gameObject.SetActive (false);
		}
			
		theText.text = "Lives: " + lifeCounter;

		if (gameOverScreen.activeSelf)
		{
			waitAfterGameOver -= Time.deltaTime;
			healthManager.SetMaxHealth ();
		}

		if (waitAfterGameOver < 0)
		{
			healthManager.SetMaxHealth ();
			SceneManager.LoadScene ("MainMenu2");
		}
	}


	public void TakeLife ()
	{
		lifeCounter--;
		//SceneManager.LoadScene (Application.loadedLevelName);
		PlayerPrefs.GetInt ("PlayerMaxHealth");
		PlayerPrefs.SetInt ("PlayerCurrentLives", lifeCounter);
	}

}
