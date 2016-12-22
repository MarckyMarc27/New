using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class ScoreManager : MonoBehaviour
{
	public static int score;

	Text theText;
	BallScript theBall;




	void Start ()
	{
		theBall = FindObjectOfType <BallScript> ();
		theText = GetComponent <Text> ();

		score = PlayerPrefs.GetInt ("CurrentPlayerScore");
	}


	void Update ()
	{
		if (score < 0)
			score = 0;


		theText.text = "Score: " + score;
	}


	public static void AddPoints (int pointsToAdd)
	{
		score += pointsToAdd;
		PlayerPrefs.SetInt ("PlayerCurrentScore", score);
	}


	public void ResetScore ()
	{
		score = 0;
		PlayerPrefs.SetInt ("PlayerCurrentScore", score);
	}

}
