/*
 * main.cpp
 *
 *  Created on: 2017-03-01
 *      Author: etudiant
 */

#include "fonctions.h"

using namespace std;

int main (void)
{
	int nb;
	int tableau[taille_max];
	float moy;

	saisiedonnee (&nb, tableau);
	moy = moyenne (nb,tableau);
	affichage (nb, moy, tableau);


}


