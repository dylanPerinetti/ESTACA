/*
* Retrouver l'essemble des TP sur "https://github.com/dylanPerinetti/ESTACA" 
* Créé par dylanPerinetti 
* Le 31/03/2022
*
*/
#include <stdio.h>

void main(void)
{
  int saisie_utilisateur;
  printf("\nBonjour !");
  do
  {
    printf("/nEntrez la somme demandee : ");
    scanf("%d", &saisie_utilisateur);
    saisie_utilisateur >= 100 ? printf("\nRetrait refuse ") : printf("\nRetrait accepte ");
  }while(saisie_utilisateur!=0);
  printf("Au Revoir !");
}
