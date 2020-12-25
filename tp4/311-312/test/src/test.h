// Librairies CppUnit nécessaires.
#include <cppunit/TestCase.h>
#include <cppunit/TestFixture.h>
#include <cppunit/extensions/HelperMacros.h>

// Le fichier à tester, qui se trouve dans un répertoire différent.
#include "../../src/Client.h"
#include "../../src/Panier.h"
#include "../../src/Produit.h"
#include "../../src/Rayon.h"

class Test : public CppUnit::TestFixture
{
    CPPUNIT_TEST_SUITE(Test);
    
    CPPUNIT_TEST(identifiantChangeTest);
    /////////////////////////////////// 3 tests effectues par equipe-2///
    CPPUNIT_TEST(panierRempliTest);
    CPPUNIT_TEST(operatorPlusGrandProduitTest);
    CPPUNIT_TEST(operatorPlusPetitProduitTest);

    CPPUNIT_TEST_SUITE_END();
    
private:
///////////////////objet pour les test////////////////
	Client* objet_a_tester;
    Produit* produit1_a_tester;
    Produit* produit2_a_tester;
    Panier panier1;
  
    
public:
	
    void setUp();
    void tearDown();

    //////////////////////////////////////////
    void identifiantChangeTest();
    void panierRempliTest ();
    void operatorPlusGrandProduitTest();
    void operatorPlusPetitProduitTest();
    

};
