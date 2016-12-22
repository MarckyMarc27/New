using System.Collections;
using System.Collections.Generic;
using UnityEngine.SceneManagement;
using UnityEngine;

public class PlayerController : MonoBehaviour
{
	[SerializeField]
	GameObject rocket;

	float speed = 8f;
	float maxVelocity = 4f;

	Rigidbody2D myRB;
	Animator anim;
	BallScript theBall;

	bool canShoot;
	bool canWalk;

	LifeManager lives;


	protected string currentLevel;
	protected int worldIndex;
	protected int levelIndex;

	public bool wonTheGame;




	void Awake ()
	{
		InitializeVariables ();
	}


	void Start ()
	{
		lives = FindObjectOfType <LifeManager> ();
		currentLevel = Application.loadedLevelName;

		wonTheGame = false;
	}


	void FixedUpdate ()
	{
		PlayerWalk ();
		Shoot ();
	}


	void InitializeVariables ()
	{
		myRB = GetComponent <Rigidbody2D> ();
		anim = GetComponent <Animator> ();

		canShoot = true;
		canWalk = true;
	}


	void Update ()
	{
		if (FindObjectOfType <BallScript> () == null)
			wonTheGame = true;

		if (wonTheGame)
		{
			UnlockLevels ();

			PlayerPrefs.GetInt ("CurrentPlayerScore");
			SceneManager.LoadScene ("World1");
		}

	}


	void Shoot ()
	{
		if (Input.GetMouseButtonDown (0))
		{
			if (canShoot)
			{
				StartCoroutine (ShootTheRocket ());
			}
		}
	}


	protected void UnlockLevels ()
	{
		for (int i = 0; i < LockLevel.worlds; i++)
		{
			for (int j = 1; j < LockLevel.levels; j++)
			{               
				if (currentLevel == "Level" + (i + 1).ToString () + "." + j.ToString ())
				{
					worldIndex = (i + 1);
					levelIndex = (j + 1);

					PlayerPrefs.SetInt ("level" + worldIndex.ToString () + ":" + levelIndex.ToString (), 1);
				}
			}
		}
			
		SceneManager.LoadScene ("World1");
	}



	IEnumerator ShootTheRocket ()
	{
		canWalk = false;

		anim.Play ("PlayerShoot");
		anim.SetBool ("Shoot", true);

		Vector3 temp = transform.position;
		temp.y += 1.5f;

		Instantiate (rocket, temp, Quaternion.identity);

		yield return new WaitForSeconds (0.4f);
		anim.SetBool ("Shoot", false);
		canWalk = true;

		yield return new WaitForSeconds (1.7f);
		canShoot = true;
	}


	void PlayerWalk ()
	{
		var force = 0f;

		var velocity = Mathf.Abs (myRB.velocity.x);

		float h = Input.GetAxis ("Horizontal");


		if (canWalk)
		{

			if (h > 0)
			{
				if (velocity < maxVelocity)
					force = speed;

				Vector3 scale = transform.localScale;
				scale.x = 1;

				transform.localScale = scale;

				anim.SetBool ("Walk", true);
			}
			else if (h < 0)
			{
				if (velocity < maxVelocity)
					force = -speed;

				Vector3 scale = transform.localScale;
				scale.x = -1;

				transform.localScale = scale;

				anim.SetBool ("Walk", true);
			}
			else if (h == 0)
			{
				anim.SetBool ("Walk", false);
			}
			
			myRB.AddForce (new Vector2 (force, 0));
		}
	}


	public IEnumerator KillThePlayerAndRestartTheGame ()
	{
		transform.position = new Vector3 (200, 200, 0);

		yield return new WaitForSeconds (1.8f);

		lives.TakeLife ();

		SceneManager.LoadScene (currentLevel);
	}


	//void OnTriggerEnter2D (Collider2D other)
	//{
	//	string[] name = other.name.Split ();
	
	//	if (name.Length < 1)
	//	{
	//		if (name [1] == "Ball")
	//		{
	//			StartCoroutine (KillThePlayerAndRestartTheGame ());
	//		}
	//	}
	//}

}
