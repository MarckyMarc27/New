using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class PauseMenu : MonoBehaviour
{
	public string levelSelect;
	public string mainMenu;

	public bool isPaused;

	public GameObject pauseMenuScreen;




	void Start ()
	{
	}
		
	void Update ()
	{
		if (isPaused)
		{
			pauseMenuScreen.SetActive (true);
			Time.timeScale = 0f;
		}
		else
		{
			pauseMenuScreen.SetActive (false);
			Time.timeScale = 1f;
		}
			
		if (Input.GetKeyDown (KeyCode.Escape))
		{
			isPaused = !isPaused;
		}
	}


	public void ResumeGame ()
	{
		isPaused = false;
	}


	public void LevelSelect ()
	{
		SceneManager.LoadScene (levelSelect);
	}


	public void QuitToMainMenu ()
	{
		SceneManager.LoadScene (mainMenu);
	}

}
