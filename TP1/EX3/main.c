/*
* Retrouver l'essemble des TP sur "https://github.com/dylanPerinetti/ESTACA" 
* Créé par dylanPerinetti 
* Le 1/04/2022
*
*/
#include "fonctions.h"


int main(void)
{
  //declaration des variables
  float distance;
  
  distance = saisirVoyage();
  
  printf("La distance du voyage est : %f\n",distance);

  if(distance == 0)printf("A dos de lapin :\n __    __\n/ \\\\..// \\ \n  ( oo )\n   \\__/\n");
  else if(distance <= 20)printf("A pied :\nOooo.\n(   /\n )  /\n(  /\n –\n");
  else if(distance<=50)printf("A vélo :\n   __O\n _ \\<,_\n (*)/ (*)\n");
  else printf("En voiture :\n   _\n__/ \\__\n|      |\n--O--O—\n");

  return 0;
}
