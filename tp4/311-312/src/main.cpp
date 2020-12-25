/**************************************************
* Titre: Travail pratique #2 - Main.cpp
* Date: 25 janvier 2018
* Auteur: Mohammed Esseddik BENYAHIA & Timothée CHAUVIN
**************************************************/

#include "Produit.h"
#include "Rayon.h"
#include "Client.h"
#include "Panier.h"
#include <string>
#include <iostream>
#include <fstream>

using namespace std;

#define NB_PRODUCTS 15

/**
*Répondez aux questions ici :
* 1/
* 2/
* 3/
**/

int main()
{
	// ifstream in("in.txt");
	// cin.rdbuf(in.rdbuf()); //redirect std::cin to in.txt!

	Produit* unProduit = new Produit();
	// Faire saisir à l'utilisateur les attributs du produit unProduit selon le format de la capture d'écran de l'énoncé
	cout << "Saisissez les attributs pour un produit :";
	cin >> *unProduit;
	cout << endl << "Le produit saisi est " << *unProduit << endl << endl;

	// Creez 15 objets du classe produit
	Produit * produits[NB_PRODUCTS];
	double echantillonPrix[NB_PRODUCTS] = { 12.56, 50.0, 34.0, 56.0, 77.0, 91.0, 21.0, 34.0, 88.0, 65.0, 42.0, 72.0, 82.0, 53.0, 68.0 };

	for (int i = 0; i < NB_PRODUCTS; i++)
		produits[i] = new Produit("p" + to_string(i), i, echantillonPrix[i]);

	// Modifiez le nom, la référence, le prix de  troisieme objet Produit créé
	// Affichez les attributs de cet objet Produit
	produits[2]->modifierNom("p20");
	produits[2]->modifierPrix(100);
	produits[2]->modifierReference(31);

	cout << "Le produit p20 est moins cher que le produit p1 ? ";
	// Comparer le prix du produit p20 et p1 à l'aide de la surcharge d'un operateur
	cout << boolalpha << (*produits[2] < *produits[1]) << endl << endl;

	// Creez un objet du classe rayon à l'aide du constructeur par défaut
	Rayon sport;

	// Modifiez la catégorie  du rayon
	sport.modifierCategorie("sport");

	// Ajoutez les 10 premiers produits de dans le rayon créé
	for (int i = 0; i < 10; i++) {
		sport += produits[i];
	}

	// Ajoutez encore une fois le premier produit dans le rayon sport
	sport += produits[0];

	// Affichez le contenu du rayon
	cout << sport;

	// Affichez le nombre de doublons du premier produit dans le rayon sport
	cout << "Nombre de doublons du produit p0 : " << sport.compterDoublons(*produits[0]) << endl << endl;

	// Creez un objet de classe client à l'aide du constructeur
	Client martine("Bellaiche", "Martine", 1111, "H2T3A6", 199004);

	// Martine achète les 5 derniers porduits
	for (int i = NB_PRODUCTS - 1; i > NB_PRODUCTS - 6; i--)
		martine.acheter(produits[i]);

	// Copiez ce client et changer son nom, prenom et idantifiant pour "Paul Martin 689"
	Client paul = Client(martine);
	paul.modifierNom("Martin");
	paul.modifierPrenom("Paul");
	paul.modifierIdentifiant(689);

	cout << "Test identifiant paul: " << boolalpha << (689 == paul) << endl << endl;

	// Paul achete le premier produit
	paul.acheter(produits[0]);

	// Livrez et afficher le panier de Paul
	paul.livrerPanier();

	// Affichez le panier de Paul et Martine
	cout << paul << endl << martine << endl;

	// Afichez le produit le plus cher du panier de martine
	cout << "Le produit le plus cher que Martine ait achete est :" <<
		endl << *martine.obtenirPanier()->trouverProduitPlusCher() << endl;

	//  Terminer le programme correctement
	for (int i = 0; i < NB_PRODUCTS; i++)
		delete produits[i];
	delete unProduit;
}
