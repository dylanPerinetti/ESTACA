/*
* Retrouver l'essemble des TP sur "https://github.com/dylanPerinetti/ESTACA" 
* Créé par dylanPerinetti 
* Le 31/03/2022
*
*/
#include <stdio.h>

void afficherAutorisationRetrait(int _montantRetrait);// Prototype fonction

int main(void)
{
  int saisie_utilisateur;
  printf("\nBonjour !");
  do
  {
    printf("/nEntrez la somme demandee : ");
    scanf("%d", &saisie_utilisateur);
    afficherAutorisationRetrait(saisie_utilisateur);
  }while(saisie_utilisateur!=0);
  printf("Au Revoir !");
  return 0;
}

void afficherAutorisationRetrait(int _montantRetrait)
{
  _montantRetrait >= 100 ? printf("\nRetrait refuse ") : printf("\nRetrait accepte ");
}
