/*
Écrire un programme qui demande à l'utilisateur de taper la largeur
et la longueur d'un champ et qui en affiche le périmètre et la surface.
*/

#include <iostream>
using namespace std;
int main()
{
	cout << "Taper la valeur de largeur" << endl;
	int valeurLargeur(0);
	cin >> valeurLargeur;

	cout << " Taper la valeur de la longeur" << endl;
	int valeurLongeur(0);
	cin >> valeurLongeur;

	cin.ignore();
	// Calcul du périmètre
	int perimetre(0);
	perimetre = (valeurLargeur + valeurLongeur) * 2;

	// Calcul de la surface
	int surface(0);
	surface = valeurLargeur * valeurLongeur;
	cout << " Perimetre du champ = " << perimetre << endl;
	cout << " Surface du champ  = " << surface << endl;
	return 0;


}