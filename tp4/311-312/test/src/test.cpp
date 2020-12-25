#include "test.h"
#include <iostream>

void Test::setUp() {
		this->objet_a_tester = new Client("James", "Lebron", 23, "H3C3A7", 17092019);
       
        this->produit1_a_tester = new Produit("izi",514,92.0);
       
        this->produit2_a_tester = new Produit("p200",438,50.0);
      
}


void Test::tearDown() {
		delete this->objet_a_tester;
        delete this->produit1_a_tester;
        delete this->produit2_a_tester;
       
}

void Test::identifiantChangeTest() {
    objet_a_tester->modifierIdentifiant(6);
    int identifiant = objet_a_tester->obtenirIdentifiant();
    CPPUNIT_ASSERT_DOUBLES_EQUAL(6, identifiant, FLT_EPSILON);
}



////////////////////////////////////test equipe-2/////////////////////////

void Test::panierRempliTest(){
    
    objet_a_tester->acheter(produit1_a_tester);

    std::stringstream os;

    os<< "Le panier de Lebron: "<<endl       // ceci est le resultat EXPECTED tel que declare setUp()
    << " nom: " <<"izi"
	<< "\t ref : "<<"514"
	<< "\t prix actuel : " <<"92"
    << "----> total a payer : " <<"92"<< endl;

    std::stringstream os_Attendu;   // ceci est le resultat qu'on va obtenir (ACTUAL )en appelant l'operateur << de Panier
    os_Attendu<<*objet_a_tester;     

    CPPUNIT_ASSERT_EQUAL(os.str(),os_Attendu.str());
}

void Test::operatorPlusGrandProduitTest(){     

    bool obtenu= produit1_a_tester->operator>(*produit2_a_tester); //prix_Produit 1 = 92  et prix_produit2 = 50
    bool attendu = true;                                           // alors oui prix_>produit.prix_ = vrai
    CPPUNIT_ASSERT_EQUAL(attendu,obtenu);                           
}


void Test::operatorPlusPetitProduitTest(){

    bool obtenu= produit1_a_tester->operator<(*produit2_a_tester);   // 92 n'est pas inferieur a 50 alors == false
    bool attendu = false;                                            // on s'attend a avoir false
    CPPUNIT_ASSERT_EQUAL(attendu,obtenu);

}

    
///////////////////////////fin/////////////////////////