using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System;

public class RealTimeCountdown : MonoBehaviour
{
	public int countDownValue;
	public Text txtTimeLeft;

	public GameObject button1;

	DateTime target;

	public enum _unite
	{
		seconds, minutes, hours
	};

	public _unite unite;




	void Start ()
	{
		ActiveCountdown ();
		button1.gameObject.SetActive (false);
	}

	void Update ()
	{
	}


	public void SetCountdown ()
	{
		switch (unite.ToString ())
		{
		case "seconds":
			target = DateTime.Now.AddSeconds (countDownValue);
			break;

		case "minutes":
			target = DateTime.Now.AddMinutes (countDownValue);
			break;

		case "hours":
			target = DateTime.Now.AddHours (countDownValue);
			break;
		}

		PlayerPrefs.SetString ("target", target.ToBinary ().ToString ());

		ActiveCountdown ();
	}


	public void ActiveCountdown ()
	{
		if (PlayerPrefs.HasKey ("target"))
		{
			target = DateTime.FromBinary (Convert.ToInt64 (PlayerPrefs.GetString ("target")));
			Debug.Log (target.ToString ());

			StartCoroutine (GetDateTimeLeft (target));
		}
	}


	string GetTimeLeft (DateTime targetDate)
	{
		TimeSpan difference = targetDate.Subtract (DateTime.Now);

		if (difference >= TimeSpan.Zero)
		{
			return string.Format ("{0:D2}:{1:D2}:{2:D2}", difference.Hours, difference.Minutes, difference.Seconds);
		}
		else
		{
			return null;
		}
	}


	public IEnumerator GetDateTimeLeft (DateTime targetDateTime)
	{
		while (GetTimeLeft (targetDateTime) != null)
		{
			txtTimeLeft.text = GetTimeLeft (targetDateTime);
			Debug.Log (GetTimeLeft (targetDateTime));
			yield return new WaitForSeconds (1);
		}
		if (GetTimeLeft (targetDateTime) != null)
		{
			button1.gameObject.SetActive (false);
		}
		else
		{
			button1.gameObject.SetActive (true);
		}
		
		// Respawn the player and reset lives/score/health (etc...);
	}

}
