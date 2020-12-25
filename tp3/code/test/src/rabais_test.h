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
    CPPUNIT_TEST(test_d1);
    CPPUNIT_TEST(test_d2);
    CPPUNIT_TEST(test_d3);
    CPPUNIT_TEST(test_d4);
    CPPUNIT_TEST(test_d5);
    CPPUNIT_TEST(test_d6);
    CPPUNIT_TEST(test_d7);
    CPPUNIT_TEST(test_d8);
    CPPUNIT_TEST(test_d9);
    
    CPPUNIT_TEST_SUITE_END();
private:
	Rabais* objet_a_tester;
    
public:
	// Fonctions d'échafaudage
    void setUp();
    void tearDown();
    void test_de_CPPUNIT();
    void test_d1();
    void test_d2();
    void test_d3();
    void test_d4();
    void test_d5();
    void test_d6();
    void test_d7();
    void test_d8();
    void test_d9();
    
};




