/*
* Retrouver l'essemble des TP sur "https://github.com/dylanPerinetti/ESTACA" 
* Créé par dylanPerinetti 
* Le 1/04/2022
*
*/
#include <stdio.h>

int main(void)
{
  int saisie_utilisateur;
  printf("\nBonjour, entrez la somme demandee : ");
  scanf("%d", &saisie_utilisateur);
  saisie_utilisateur >= 100 ? printf("\nRetrait refuse ") : printf("\nRetrait accepte ");
  return 0;
}
