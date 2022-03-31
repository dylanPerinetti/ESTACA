/*
* Retrouver l'essemble des TP sur "https://github.com/dylanPerinetti/ESTACA" 
* Créé par dylanPerinetti 
* Le 31/03/2022
*
*/
#ifndef __FONCT_H__
#define __FONCT_H__

#include <stdio.h>
#include <math.h>

#define RAYON_TERRESTRE 6371
#define LATTITUDE_MAX 90
#define LATTITUDE_MIN -90
#define LONGITUDE_MAX 180
#define LONGITUDE_MIN -180

float convertDegToRad(float valeurDegre);	// M_PI est un Type double
float calculDistance(float latA, float longA, float latB, float longB); // retourne la distance calculer avec RAYON_TERRESTRE

float saisirValBornee(int borneInf, int borneSup);
void recupCoordonnees(float *latitude, float *longitude);

float saisirVoyage();

#endif