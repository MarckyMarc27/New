using UnityEngine;
using System.Collections;

public class BallScript : MonoBehaviour
{
	float forceX, forceY;
	Rigidbody2D myRB;

	[SerializeField]
	bool moveLeft, moveRight;

	[SerializeField]
	GameObject originalBall;

	GameObject ball1, ball2;
	BallScript ball1Script, ball2Script;

	public int pointsToGive;

	PlayerController thePlayer;





	void Awake ()
	{
		SetBallSpeed ();
	}


	void Start ()
	{
		myRB = GetComponent <Rigidbody2D> ();
		thePlayer = FindObjectOfType <PlayerController> ();
	}


	void Update ()
	{
		MoveBall ();
	}


	void InstantiateBalls ()
	{
		if (this.gameObject.tag != "Smallest Ball")
		{
			ball1 = Instantiate (originalBall) as GameObject;
			ball2 = Instantiate (originalBall) as GameObject;

			Destroy (this.gameObject);

			ball1.name = originalBall.name;
			ball2.name = originalBall.name;

			ball1Script = ball1.GetComponent <BallScript> ();
			ball2Script = ball2.GetComponent <BallScript> ();
		}
	}


	void InitializeBallsAndTurnOffCurrentBall ()
	{
		InstantiateBalls ();

		Vector3 temp = transform.position;

		ball1.transform.position = temp;
		ball1Script.SetMoveLeft (true);

		ball2.transform.position = temp;
		ball2Script.SetMoveRight (true);


		ball1.GetComponent <Rigidbody2D> ().velocity = new Vector2 (0, 2.5f);
		ball2.GetComponent <Rigidbody2D> ().velocity = new Vector2 (0, 2.5f);	
	}


	public void SetMoveLeft (bool canMoveLeft)
	{
		this.moveLeft = canMoveLeft;
		this.moveRight = !canMoveLeft;
	}


	public void SetMoveRight (bool canMoveRight)
	{
		this.moveRight = canMoveRight;
		this.moveLeft = !canMoveRight;
	}


	void SetBallSpeed ()
	{
		forceX = 2.312f;

		switch (this.gameObject.tag)
		{
		case "Largest Ball":
			forceY = 15.5f;
			break;


		case "Large Ball":
			forceY = 14f;
			break;

		case "Medium Ball":
			forceY = 13f;
			break;

		case "Small Ball":
			forceY = 11.5f;
			break;

		case "Smallest Ball":
			forceY = 10.5f;
			break;
		}
	}


	void MoveBall ()
	{
		if (moveLeft)
		{
			Vector3 temp = transform.position;
			temp.x -= forceX * Time.deltaTime;
			transform.position = temp;
		}

		if (moveRight)
		{
			Vector3 temp = transform.position;
			temp.x += forceX * Time.deltaTime;
			transform.position = temp;
		}
	}


	void OnTriggerEnter2D (Collider2D other)
	{
		if (other.tag == "Ground")
		{
			myRB.velocity = new Vector2 (0, forceY);
		}


		if (other.tag == "Right Wall")
		{
			SetMoveLeft (true);
		}

		if (other.tag == "Left Wall")
		{
			SetMoveRight (true);
		}

		if (other.tag == "Rocket")
		{
			ScoreManager.AddPoints (pointsToGive);
			
			if (other.tag == "Smallest Ball")
			{
				other.gameObject.SetActive (false);
			}

			if (gameObject.tag != "Smallest Ball")
			{
				InitializeBallsAndTurnOffCurrentBall ();
			}

			else
			{
				gameObject.SetActive (false);
			}
				
		}
	}

}






































