/*
* Retrouver l'essemble des TP sur "https://github.com/dylanPerinetti/ESTACA" 
* Créé par dylanPerinetti 
* Le 31/03/2022
*
* 3) Les entrés et les sorties de ce programme sont n, k pour les stdin et resultat pour sdtout
*
*/
#include <stdio.h>

int main(void)
{
  int n, k, factoriel_n = 1, factoriel_k = 1, factoriel_dif = 1, differance_n_k;// Declaration + affectation
  float  resultat;

  printf("\nVeuillez saisir la valeur de n (pour calculer un coefficient binomial k parmis n ) :\n>_");
  scanf("%d",&n);           // Saisie utilistaeur
  printf("\nVeuillez renseigner une valeur de k :\n>_");
  scanf("%d",&k);
  
  differance_n_k = n - k;
  
  for(int p=1;p<=n;p++)factoriel_n = factoriel_n*p;                 // Calacule du Factoriel n
  for(int p=1;p<=k;p++)factoriel_k = factoriel_k*p;                 // Calacule du Factoriel k
  for(int p=1;p<=differance_n_k;p++)factoriel_dif = factoriel_dif*p;// Calacule du Factoriel differance_n_k
  
  resultat = factoriel_n/(factoriel_k*factoriel_dif);
  printf("\nLe coefficient binomial k parmi n est : %f\n",resultat);  // affichage du resultat
  return 0;                         // return pour le int main()
}
