/********************************************
* Titre: Travail pratique #2 - Rayon.cpp
* Date: 25 janvier 2018
* Auteur: Timoth�e CHAUVIN
*******************************************/

#include "Rayon.h"

Rayon::Rayon(const string& cat) :
	categorie_{ cat }
{
}

Rayon::~Rayon()
{
}

// Methodes d'acces
string Rayon::obtenirCategorie() const
{
	return categorie_;
}

vector<Produit*> Rayon::obtenirTousProduits() const
{
	return tousProduits_;
}

int Rayon::obtenirNombreProduits() const
{
	return tousProduits_.size();
}

// Methodes de modification
void Rayon::modifierCategorie(const string& cat)
{
	categorie_ = cat;
}

Rayon Rayon::operator+=(Produit * produit)
{
	tousProduits_.push_back(produit);
	return *this;
}

int Rayon::compterDoublons(const Produit& produit)
{
	int nbProduit = 0;
	for (int i = 0; i < tousProduits_.size(); i++)
		if (*tousProduits_[i] == produit)
			nbProduit++;

	return nbProduit;
}

ostream & operator<<(ostream & os, const Rayon & rayon)
{
	os << "Le rayon " << rayon.categorie_ << ": " << endl;
	for (int i = 0; i < rayon.tousProduits_.size(); i++)
		os << "----> " << *rayon.tousProduits_[i] << endl;

	return os;
}
