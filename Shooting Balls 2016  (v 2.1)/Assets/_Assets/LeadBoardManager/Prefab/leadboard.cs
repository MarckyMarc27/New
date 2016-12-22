/// Utilisation
/// Renseigner la Private et Public Key au niveau du préfab.
/// 
/// Ajouter le Joueur Bill avec un score de 100 
/// leadboard.AddNewHighscore("Bill",100);
/// 
/// Recupérer la longueur du tableau des enregistrements
/// leadboard.lenght
/// 
/// Afficher le nom + le score du premier au classement.
/// leadboard.GetPosition(0)


using UnityEngine;
using System.Collections;

public class leadboard : MonoBehaviour {
    
   public string privateCode ;
   public string publicCode;
   public int MaxRank = 10;
   public  string[] Ranking;
   public static int lenght;
   const string webURL = "http://dreamlo.com/lb/";
   static leadboard instance;
  
    void Start()
    {
        DownloadHighscores ();
    }

    void Awake ()
        {
        if(!instance)
        {
            instance = this;
        }
        else
        {
            Destroy (this.gameObject);
        }

        DontDestroyOnLoad (this.gameObject);
    }


    public static void AddNewHighscore (string username, int score)
    {
           instance.StartCoroutine (instance.UploadNewHighscore (username, score));         

    }

    IEnumerator UploadNewHighscore (string username, int score)
        {
           WWW www = new WWW (webURL + privateCode + "/add/" + WWW.EscapeURL (username) + "/" + score);        
           yield return www;

           if (string.IsNullOrEmpty (www.error))
               {
                    print ("Upload Successful");
                   DownloadHighscores ();
               }
           else
               {
                    print ("Error Uploading: " + www.error);
               }
        }

    public static void DownloadHighscores ()
        {
      
          instance.StartCoroutine ("DownloadHighscoresFromDatabase");
        }


    IEnumerator DownloadHighscoresFromDatabase ()
    {
       WWW www = new WWW (webURL + publicCode + "/pipe/");
       yield return www;
       if (string.IsNullOrEmpty (www.error))
       {
           FormatHighscores (www.text);          
       }
       else
       {
           print ("Error Downloading: " + www.error);
       }
    }
    
    void FormatHighscores (string textStream)
   {        
      string[] entries = textStream.Split (new char[] { '\n' }, System.StringSplitOptions.RemoveEmptyEntries);
        
        int ii;
        if(entries.Length<MaxRank)
        {
            ii = entries.Length;
        }
        else
        {
            ii = MaxRank;
        }

        Ranking = new string[ii];

        for (int i = 0; i<ii; i ++)
      {
            string[] entryInfo = entries[i].Split (new char[] { '|' });
            string username = entryInfo[0];
            int score = int.Parse (entryInfo[1]);
            Ranking[i]= username + " " + score;          
      }
        lenght = Ranking.Length;    
   }

    public static string GetPosition (int number)
    {        
         return (instance.Ranking[number]);
    }
}


 

