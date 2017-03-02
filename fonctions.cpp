/*
 * fonctions.cpp
 *
 *  Created on: 2017-03-01
 *      Author: etudiant
 */

#include <iostream>
const int taille_max = 100;

using namespace std;

void saisiedonnee (int* p_nb, int p_tableau[])
{
	cout << "Entrez le nombre de notes a traiter" << endl;
	do
	{
		cin >> *p_nb;
	} while ((*p_nb <= 0)||(*p_nb > taille_max));
	for (int i = 0; i < *p_nb; i++)
	{
		cout << "Entrez la note numero " << i+1 << endl;
		cin >> p_tableau[i];
	}
}

float moyenne (int nb, int tableau[])
{
	float somme = 0;
	for (int i = 0; i < nb; i++)
	{
		somme += tableau[i];
	}
	return somme/nb;
}

void affichage (int nb, float moyenne, int p_tableau[])
{
	cout << "La moyenne des "<< nb <<" notes est egale a : " << moyenne << endl;
	for (int i = 0; i < nb; i++)
	{
		float ecart = p_tableau[i] - moyenne;
		cout << "L'ecart entre la note numero " << i+1 << " est de " << ecart << " points" << endl;
	}
}
