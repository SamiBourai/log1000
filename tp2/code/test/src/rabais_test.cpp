#include "rabais_test.h"


void RabaisTest::setUp() {
		this->objet_a_tester = new Rabais();
}

void RabaisTest::tearDown() {
		delete this->objet_a_tester;
}
// test de CPPUnit
void RabaisTest::test_de_CPPUNIT(){
    CPPUNIT_ASSERT_EQUAL(1,1);
}
// Test rabais employee
void RabaisTest::test_code_employee() {
    Facture factureEmployee= Facture();
    factureEmployee.ajouterItem(1);
    tm adhesion;
    adhesion.tm_year =119;
    adhesion.tm_mon=1;
    adhesion.tm_mday=30;
    Client* clientEmployee = new Client (90201,"Maxime","Meloche",25,"HIC",adhesion);
    this->objet_a_tester->ajouterClient(clientEmployee);
    
    
   // int id_Client =26000;
	float rabaisEmployee = this->objet_a_tester->getRabais(factureEmployee, 90201);
	CPPUNIT_ASSERT_EQUAL(0.15f, rabaisEmployee);


} 
//test rabais par rapport a la zone
void RabaisTest::test_rabais_zone() {
    Facture factureEmployee= Facture();
    factureEmployee.ajouterItem(240);
    tm adhesion;
    adhesion.tm_year =2020;
    adhesion.tm_mon=10;
    adhesion.tm_mday=30;
    Client* clientEmployee = new Client (15000,"Fanilo","Bourai",25,"H1C",adhesion);
    this->objet_a_tester->ajouterClient(clientEmployee);
    
    
   // int id_Client =26000;
	float rabaisEmployee = this->objet_a_tester->getRabais(factureEmployee, 15000);
	CPPUNIT_ASSERT_EQUAL(0.06f, rabaisEmployee);


} 

