// Classe qui teste la classe Diviseur
// Avec le framework CppUnit

// Librairies CppUnit nécessaires.
#include <cppunit/TestCase.h>
#include <cppunit/TestFixture.h>
#include <cppunit/extensions/HelperMacros.h>

// Le fichier à tester, qui se trouve dans un répertoire différent.
#include "../../src/client.h"
#include "../../src/facture.h"
#include "../../src/rabais.h"

class RabaisTest : public CppUnit::TestFixture
{
    CPPUNIT_TEST_SUITE(RabaisTest);
    CPPUNIT_TEST(test_de_CPPUNIT);
    CPPUNIT_TEST(test_code_employee);
    CPPUNIT_TEST(test_rabais_zone);
    /*CPPUNIT_TEST(test_modulo_diviseur_tres_negatif);
    CPPUNIT_TEST(test_modulo_diviseur_negatif);
    CPPUNIT_TEST(test_modulo_diviseur_nul);
    CPPUNIT_TEST(test_modulo_diviseur_positif);
    CPPUNIT_TEST(test_modulo_diviseur_tres_positif);
    CPPUNIT_TEST_SUITE_END();*/
    
    CPPUNIT_TEST_SUITE_END();
private:
	Rabais* objet_a_tester;
    
public:
	// Fonctions d'échafaudage
    void setUp();
    void tearDown();
    void test_de_CPPUNIT();
    void test_code_employee();
    void test_rabais_zone();
    /*
    // Fonctions de tests
    void test_modulo_diviseur_tres_negatif();
    void test_modulo_diviseur_negatif();
    void test_modulo_diviseur_nul();
    void test_modulo_diviseur_positif();
    void test_modulo_diviseur_tres_positif(); */
       //tm date;
};




