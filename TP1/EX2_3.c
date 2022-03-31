/*
* Retrouver l'essemble des TP sur "https://github.com/dylanPerinetti/ESTACA" 
* Créé par dylanPerinetti 
* Le 31/03/2022
*
*/
#include <stdio.h>

int fact(int _x);
void saisirMinMax(int *min, int *max);

int main(void)
{
  int n, k,resultat;// Declaration + affectation

  saisirMinMax(&k, &n);

  resultat = fact(n)/(fact(k)*fact((n-k)));
  printf("\nLe coefficient binomial %d parmi %d est : %d\n", k, n, resultat);  // affichage du resultat
  return 0;                         // return pour le int main()
}

int fact(int _x)
{
  int p,_resultat=1;
  for(p=1;p<=_x;p++)_resultat = _resultat*p;
  return _resultat;
}
void saisirMinMax(int *min, int *max)
{
  int buf;
  printf("Veuiller saisir deux entier :\n>_");
  scanf("%d%d",min,max);
  if(*min>*max)
  {
    buf = *min;
    *min = *max;
    *max = buf;
  }
}
