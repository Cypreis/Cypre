#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <windows.h>
#include <string.h>
#define Long 15
#define larg 3
/*DECLARATION STRUCTURES */
struct Joueur
{
  char prenom [20];
  int age;
};

/*DECLARATION STRUCTURES */



/* DESCLARATION DES SOUS PROGRAMMES */


char tableau (int longeurtableau, int largeurtableau);
void color (int couleurDuTexte, int couleurDuFond);
void age();

/* DESCLARATION DES SOUS PROGRAMMES */


int main()
{
          printf("Bonjour\n");
          tableau (Long, larg);

  return 0;
}

/* SOUS PROGRAMMES */
char tableau (int longeurtableau, int largeurtableau)
{
  char tab [largeurtableau] [longeurtableau];
  int i,j;

  for (i=0; i<largeurtableau; i++)
  {
    for (j=0; j<longeurtableau; j++)
    {
      tab [i] [j] = 254 ;
      printf("%c",tab [i] [j] );
    }
    printf("\n");
  }

}

void color (int couleurDuTexte, int couleurDuFond) // Tout ce qui est écris en dessous de COLOR change de couleur
{
     HANDLE H = GetStdHandle(STD_OUTPUT_HANDLE);
     SetConsoleTextAttribute(H, couleurDuFond*16+couleurDuTexte);
}

/* SOUS PROGRAMMES */
