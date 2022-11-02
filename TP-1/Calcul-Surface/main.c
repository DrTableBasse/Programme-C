/*****************************************************
* \author  Nuez Samuel
* \date    26 octobre 2022
* \version 1.0
******************************************************/


#include <math.h>
#include <stdio.h>
#include <stdlib.h>

void main(){

double angle = 180;
int n = 0; //Nombre de coté de la figure
float c = 0; //Mesure d'un coté
double aire = 0;

//printf( "La tangente de l'angle vaut : %lf\n", tan( angle ) );

printf("Choisissez le nombre de cotés :");
scanf("%f", &n); //On demande le nombre de coté à l'utilisateur

printf("Choisissez la mesure d'un coté :");
scanf("%f", &c); //On demande la mesure des coté à l'utilisateur


aire = (n*c*c)/(4*tan(M_PI/n));

printf( "L'aire du pentagone est égale à  : %lf\n", aire);



}