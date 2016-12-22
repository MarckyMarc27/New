using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;

public class LevelSelectScript : MonoBehaviour
{
	private int worldIndex;   
	private int levelIndex;





	void  Start ()
	{
		for (int i = 1; i <= LockLevel.worlds; i++)
		{
			if (Application.loadedLevelName == "World" + i)
			{
				worldIndex = i;
				CheckLockedLevels (); 
			}
		}
	}


	public void Selectlevel (string worldLevel)
	{
		SceneManager.LoadScene ("Level" + worldLevel); //load the level
		PlayerPrefs.GetInt ("CurrentPlayerScore");
		PlayerPrefs.SetInt ("CurrentPlayerScore", ScoreManager.score);
	}

	//uncomment the below code if you have a main menu scene to navigate to it on clicking escape when in World1 scene
	/*public void  Update (){
  if (Input.GetKeyDown(KeyCode.Escape) ){
   Application.LoadLevel("MainMenu");
  }   
 }*/
	void CheckLockedLevels ()
	{
		for (int j = 1; j < LockLevel.levels; j++)
		{
			levelIndex = (j + 1);

			if ((PlayerPrefs.GetInt ("level" + worldIndex.ToString () + ":" + levelIndex.ToString ())) == 1)
			{
				GameObject.Find ("LockedLevel" + (j + 1)).active = false;
				Debug.Log ("Unlocked");
			}
		}
	}

}