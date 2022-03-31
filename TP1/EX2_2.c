/*
* Retrouver l'essemble des TP sur "https://github.com/dylanPerinetti/ESTACA" 
* Créé par dylanPerinetti 
* Le 31/03/2022
*
*
* stdin : n , k
* stdout : resultat
*/
#include <stdio.h>

int fact(int _x);

int main(void)
{
  int n, k,resultat;// Declaration + affectation

  printf("\nVeuillez saisir la valeur de n (pour calculer un coefficient binomial k parmis n ) :\n>_");
  scanf("%d",&n);           // Saisie utilistaeur
  printf("\nVeuillez renseigner une valeur de k :\n>_");
  scanf("%d",&k);

  resultat = fact(n)/(fact(k)*fact(n-k));
  printf("\nLe coefficient binomial %d parmi %d est : %d\n", k, n, resultat);  // affichage du resultat
  return 0;                         // return pour le int main()
}

int fact(int _x)
{
  int p,_resultat=1;
  for(p=1;p<=_x;p++)_resultat = _resultat*p;
  return _resultat;
}
