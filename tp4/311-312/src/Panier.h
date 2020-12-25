/********************************************
* Titre: Travail pratique #2 - Panier.h
* Date: 25 janvier 2018
* Auteur: Mohammed Esseddik BENYAHIA & Timothée CHAUVIN
*******************************************/

#pragma once

#include <string>
#include <vector>
#include "Produit.h"

using namespace std;

class Panier
{

public:
	Panier();
	~Panier();

	vector<Produit*>  obtenirContenuPanier()const;
	int obtenirNombreContenu() const;
	double obtenirTotalApayer() const;

	void modifierTotalAPayer(double totalAPayer);

	void ajouter(Produit * prod);
	void livrer();

	// TODO: Ajouter la methode qui retourne le produit le plus chere du panier
	Produit* trouverProduitPlusCher();
	// TODO: Cette methode doit être remplacée par la surcharge de l'opérateur <<
	friend ostream& operator<<(ostream& os, const Panier& panier);

private:
	double totalAPayer_;

	// TODO: Remplacer ces attributs par un vecteur de la STL
	vector<Produit*> contenuPanier_;

};
