/********************************************
* Titre: Travail pratique #2 - Panier.cpp
* Date: 25 janvier 2018
* Auteur: Mohammed Esseddik BENYAHIA & Timothée CHAUVIN
*******************************************/

#include "Panier.h"

Panier::Panier() :
	totalAPayer_{ 0 }
{
}

Panier::~Panier()
{
}

// methodes d'accès
vector<Produit*>  Panier::obtenirContenuPanier()const
{
	return contenuPanier_;
}

int Panier::obtenirNombreContenu() const
{
	return contenuPanier_.size();
}

double Panier::obtenirTotalApayer() const
{
	return totalAPayer_;
}

void Panier::modifierTotalAPayer(double totalAPayer)
{
	totalAPayer_ = totalAPayer;
}

// méthodes de modification

// autres méthodes
void Panier::ajouter(Produit * prod)
{
	contenuPanier_.push_back(prod);
	totalAPayer_ += prod->obtenirPrix();
}

void Panier::livrer()
{
	totalAPayer_ = 0;
	contenuPanier_.clear();
}

Produit * Panier::trouverProduitPlusCher()
{
	if (contenuPanier_.empty())
		return nullptr;

	Produit* prodPlusChere = contenuPanier_[0];
	for (int i = 1; i < contenuPanier_.size(); i++)
		if (*contenuPanier_[i] > *prodPlusChere)
			prodPlusChere = contenuPanier_[i];

	return prodPlusChere;
}

// TODO: Cette methode doit être remplacée par la surcharge de l'opérateur << IMPLEMENTE PAR EQUIPE 2 @@

ostream & operator<<(ostream & os, const Panier & panier)
{
	if (panier.contenuPanier_.empty())
	{
		return os<<"le panier du Client est vide !";     // ici il n'y a aucune methode pour avoir acces au nom ?????
	}else
	{
		
		for (int i = 0; i < panier.contenuPanier_.size(); i++){
			os<< " nom: " <<panier.contenuPanier_[i]->obtenirNom()
		 	<< "\t ref : " <<panier.contenuPanier_[i]->obtenirReference()
		 	<< "\t prix actuel : " << panier.contenuPanier_[i]->obtenirPrix();
			
		}
		os << "----> total a payer : " << panier.obtenirTotalApayer() << endl;
		return os;
	}
		
}
