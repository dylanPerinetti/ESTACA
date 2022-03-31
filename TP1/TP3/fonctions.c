/*
* Retrouver l'essemble des TP sur "https://github.com/dylanPerinetti/ESTACA" 
* Créé par dylanPerinetti 
* Le 31/03/2022
*
*/
#include "fonctions.h"


float convertDegToRad(float valeurDegre)
{
    return (valeurDegre*M_PI)/180;
}



float calculDistance(float latA, float longA, float latB, float longB)// Consigne Rmq : les longitudes et latitudes sont exprimées en degrés en paramètre.
{// Les fonctions de labibliothèque <math.h> trigonométriques attendent des valeurs en radians.
	return RAYON_TERRESTRE*acos((cos(convertDegToRad(longA)-convertDegToRad(longB))*cos(convertDegToRad(latA))*cos(convertDegToRad(latB))+sin(convertDegToRad(latA))*sin(convertDegToRad(latB))));
}


float saisirValBornee(int borneInf, int borneSup)
{
    float _saisie_utilisateur;

    do
    {
        printf("La valeur doit etre comprise entre %d et %d :\n>_ ", borneInf, borneSup);
        scanf("%f",&_saisie_utilisateur);
    }while(_saisie_utilisateur < borneInf || _saisie_utilisateur > borneSup);

    return _saisie_utilisateur;
}




void recupCoordonnees(float *latitude, float *longitude)
{
	printf("Latitude --> \n");
    *latitude = saisirValBornee(LATTITUDE_MIN, LATTITUDE_MAX);
    printf("Longitude --> \n");
    *longitude = saisirValBornee(LONGITUDE_MIN, LONGITUDE_MAX);
}



float saisirVoyage(){
    float _latitudeA, _latitudeB, _longitudeA, _longitudeB;
    printf("\nVeuillez entrer la latitude(en °) et de longitude(en °) du point de Depart.\n");
    recupCoordonnees(&_latitudeA, &_longitudeA);
    printf("\nVeuillez entrer la latitude(en °) et de longitude(en °) du point d'arriver.\n");
    recupCoordonnees(&_latitudeB, &_longitudeB);

    return calculDistance(_latitudeA, _longitudeA, _latitudeB, _longitudeB);
}