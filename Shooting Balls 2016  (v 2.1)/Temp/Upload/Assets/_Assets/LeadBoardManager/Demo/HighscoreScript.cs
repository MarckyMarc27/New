using UnityEngine;
using System.Collections;

public class HighscoreScript : MonoBehaviour {

    // leadboard.lenght :  Longeur du tableau leadboard
    // leadboard.GetPosition (i) : Renvoie le nom et le score position i (0 etant la premiére place).
        
    void Start () {
          
        for(int i = 0; i < leadboard.lenght; i++)
        {
            GetComponent<TextMesh> ().text += leadboard.GetPosition (i) + "\n";
        }
    }

    void Update()
    {
        if (Input.GetButtonDown("Fire1"))
        {
            Application.LoadLevel ("game");
        }
    }
}
	
	
