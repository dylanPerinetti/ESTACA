/*
* Retrouver l'essemble des TP sur "https://github.com/dylanPerinetti/ESTACA" 
* Créé par dylanPerinetti 
* Le 31/03/2022
*
* 1) Les entré et les sortie de ce programme sont n pour stdin et resultat pour sdtout
*
*
*
*/
#include <stdio.h>

int main(void)
{
    int n,resultat=1;         // Declaration + affectation
  
    printf("Veuillez saisir la valeur de n (pour calculer n!) :\n>_");
    scanf("%d",&n);           // Saisie utilistaeur
  
    for(int p=1;p<=n;p++)resultat = resultat*p;// Calacule du Factoriel
  
    printf("%d! = %d\n",n,resultat); // affichage du resultat
  return 0;                   // return pour le int main()
}
