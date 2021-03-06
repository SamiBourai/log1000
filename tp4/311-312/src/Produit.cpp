/********************************************
* Titre: Travail pratique #2 - Produit.cpp
* Date: 25 janvier 2018
* Auteur: Mohammed Esseddik BENYAHIA & Timoth�e CHAUVIN
*******************************************/

#include "Produit.h"

Produit::Produit(const string& nom, int reference, double prix) :
	nom_{ nom },
	reference_{ reference },
	prix_{ prix }
{ }

// Methodes d'acces
string Produit::obtenirNom() const
{
	return nom_;
}

int Produit::obtenirReference() const
{
	return reference_;
}

double Produit::obtenirPrix() const
{
	return prix_;
}


// Methodes de modification
void Produit::modifierNom(const string& nom)
{
	nom_ = nom;
}

void Produit::modifierReference(int reference)
{
	reference_ = reference;
}

void Produit::modifierPrix(double prix)
{
	prix_ = prix;
}
// TODO: Ajouter la surcharge de l'op�rateur > // IMPLEMENTE//EQUIPE2 312
	
bool Produit::operator>(const Produit & produit) const
{
	//TODO
	return prix_>produit.prix_;
}


// TODO: Ajouter la surcharge de l'op�rateur <  // IMPLEMENTE//EQUIPE2 312
bool Produit::operator<(const Produit & produit) const
{
	//TODO
	return prix_<produit.prix_;
}

bool Produit::operator==(const Produit & produit) const
{
	return (nom_ == produit.nom_ &&
			prix_ == produit.prix_ &&
			reference_ == produit.reference_);
}

istream & operator>>(istream & is, Produit & produit)
{
	return is >> produit.nom_ >> produit.reference_ >> produit.prix_;
}

std::ostream & operator<<(std::ostream & os, const Produit & produit)
{
	return os << "nom : " << produit.nom_ 
			  << "\t ref : " << produit.reference_ 
			  << "\t prix : " << produit.prix_;
}
