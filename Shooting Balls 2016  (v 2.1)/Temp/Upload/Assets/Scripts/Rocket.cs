using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Rocket : MonoBehaviour
{
	Rigidbody2D myRB;

	float speed = 5f;



	void Awake ()
	{
		myRB = GetComponent <Rigidbody2D> ();
	}
		
	void Start ()
	{
	}

	void FixedUpdate ()
	{
		myRB.velocity = new Vector2 (0, speed);
	}
		
	void Update ()
	{
	}


	void OnTriggerEnter2D (Collider2D target)
	{
		if (target.tag == "Top")
		{
			Destroy (gameObject);
		}

		string[] name = target.name.Split ();

		if (name.Length > 1)
		{
			if (name [1] == "Ball")
			{
				Destroy (gameObject);
			}
		}
	}

}
