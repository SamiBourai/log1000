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
/*branche vrai de SRS01/SRS02/SRS03 :
d1 = <{Facture=120.0,client =[27000, ``Tremblay``, ‘’Joseph’’, 60, ‘’H1C’’ 2020] ], 0.15}>
*/
void RabaisTest::test_d1() {
    Facture factureEmployee= Facture();
    factureEmployee.ajouterItem(120.0);
    tm adhesion;
    adhesion.tm_year =119;
    adhesion.tm_mon=1;
    adhesion.tm_mday=30;
    Client* clientEmployee = new Client (27000,"Tremblay","Joseph",60,"HIC",adhesion);
    this->objet_a_tester->ajouterClient(clientEmployee);
    
    
   // int id_Client =26000;
	float rabaisEmployee = this->objet_a_tester->getRabais(factureEmployee, 27000);
	CPPUNIT_ASSERT_EQUAL(0.15f, rabaisEmployee);

} 

//------------------------------Branche fausse deSRS01/SRS02/SRS03  et donc le reste des exigénces----


//d2 = <{[Facture=120.0,client =[20 000, ``Lionel``, ‘’Messi’’, 57, ‘’H1C’’ 1987] ], 0.35}>
void RabaisTest::test_d2() {
    Facture facture= Facture();
    facture.ajouterItem(20);
    facture.ajouterItem(100);
    tm adhesion;
    adhesion.tm_year =1987;
    adhesion.tm_mon=10;
    adhesion.tm_mday=30;
    Client* client = new Client (20000,"Lionel","Messi",57,"H1C",adhesion);
    this->objet_a_tester->ajouterClient(client);
    
    
   // int id_Client =26000;
	float rabais = this->objet_a_tester->getRabais(facture, 20000);
	CPPUNIT_ASSERT_EQUAL(0.35f, rabais);


}


//d3 = <{[Facture=1200.0,client =[20 000, ``Fani``, ‘’lotiana’’, 25, ‘’H1C’’ 2020] ], 0.10}>

void RabaisTest::test_d3() {
    Facture facture= Facture();
    facture.ajouterItem(1000);
    facture.ajouterItem(200);
    tm adhesion;
    adhesion.tm_year =2020;
    adhesion.tm_mon=10;
    adhesion.tm_mday=30;
    Client* client = new Client (20000,"Fani","lotiana",25,"H1C",adhesion);
    this->objet_a_tester->ajouterClient(client);
    
    
   // int id_Client =26000;
	float rabais = this->objet_a_tester->getRabais(facture, 20000);
	CPPUNIT_ASSERT_EQUAL(0.10f, rabais);


}

//test Client rabais par rapport a la zone J40,age =60>55, Rabais Adhesion<10 ,Rabais Achat<6   0.1+0.02+0.02
//d4 =<{[Facture=120.0,client =[20 000, ``Cristiano``, ‘’Ronaldo’’, 60, ‘’H3P’’ 1990] ], 0.24}>
void RabaisTest::test_d4() {
    Facture facture= Facture();
    facture.ajouterItem(50);
    facture.ajouterItem(70);
    tm adhesion;
    adhesion.tm_year =1990;
    adhesion.tm_mon=10;
    adhesion.tm_mday=30;
    Client* client = new Client (20000,"Cristiano","Ronaldo",60,"H3P",adhesion);
    this->objet_a_tester->ajouterClient(client);
    
    
   // int id_Client =26000;
	float rabais = this->objet_a_tester->getRabais(facture, 20000);
	CPPUNIT_ASSERT_EQUAL(0.24f, rabais);


}

//d5= <{[Facture=1200.0,client =[20 000, ``Riyad``, ‘’Mahrez’’, 20, ‘’H3P’’ 2020 ], 0.09}>

void RabaisTest::test_d5() {
    Facture facture= Facture();
    facture.ajouterItem(1000);
    facture.ajouterItem(200);
    tm adhesion;
    adhesion.tm_year =2020;
    adhesion.tm_mon=10;
    adhesion.tm_mday=30;
    Client* client = new Client (20000,"Riyad","Mahrez",20,"H3P",adhesion);
    this->objet_a_tester->ajouterClient(client);
    
    
   // int id_Client =26000;
	float rabais = this->objet_a_tester->getRabais(facture, 20000);
	CPPUNIT_ASSERT_EQUAL(0.09f, rabais);


}

//d6=<{[Facture=120.0,client =[20 000, ``Antoine``, ‘’Greizman’’, 60, ‘’J4O’’ 1987] ], 0.33}>

void RabaisTest::test_d6() {
    Facture facture= Facture();
    facture.ajouterItem(100);
    facture.ajouterItem(20);
    tm adhesion;
    adhesion.tm_year =1987;
    adhesion.tm_mon=10;
    adhesion.tm_mday=30;
    Client* client = new Client (20000,"Antoine","Greizman",60,"J4O",adhesion);
    this->objet_a_tester->ajouterClient(client);
    
    
   // int id_Client =26000;
	float rabais = this->objet_a_tester->getRabais(facture, 20000);
	CPPUNIT_ASSERT_EQUAL(0.33f, rabais);


}

//d7= <{[Facture=1200.0,client =[20 000, ``Diego``, ‘’Maradona’’, 20, ‘’J4O’’ 2020 ], 0.08}>

void RabaisTest::test_d7() {
    Facture facture= Facture();
    facture.ajouterItem(1000);
    facture.ajouterItem(200);
    tm adhesion;
    adhesion.tm_year =2020;
    adhesion.tm_mon=10;
    adhesion.tm_mday=30;
    Client* client = new Client (20000,"Diego","Maradona",20,"J4O",adhesion);
    this->objet_a_tester->ajouterClient(client);
    
    
   // int id_Client =26000;
	float rabais = this->objet_a_tester->getRabais(facture, 20000);
	CPPUNIT_ASSERT_EQUAL(0.08f, rabais);


}
//d8 = <{[Facture=120.0,client =[20 000, ``Antoine``, ‘’Greizman’’, 60, ‘’H1G’’ 1987] ], 0.31}>
void RabaisTest::test_d8() {
    Facture facture= Facture();
    facture.ajouterItem(100);
    facture.ajouterItem(20);
    tm adhesion;
    adhesion.tm_year =1987;
    adhesion.tm_mon=10;
    adhesion.tm_mday=30;
    Client* client = new Client (20000,"Antoine","Greizman",60,"H1G",adhesion);
    this->objet_a_tester->ajouterClient(client);
    
    
   // int id_Client =26000;
	float rabais = this->objet_a_tester->getRabais(facture, 20000);
	CPPUNIT_ASSERT_EQUAL(0.31f, rabais);


}

//d9 = <{[Facture=1200.0,client =[20 000, ``Jack``, ‘’Graelish ’’, 20, ‘’J4O’’ 2020 ], 0.08}>
void RabaisTest::test_d9() {
    Facture facture= Facture();
    facture.ajouterItem(1000);
    facture.ajouterItem(200);
    tm adhesion;
    adhesion.tm_year =2020;
    adhesion.tm_mon=10;
    adhesion.tm_mday=30;
    Client* client = new Client (20000,"Jack","Graelish",20,"J4O",adhesion);
    this->objet_a_tester->ajouterClient(client);
    
    
   // int id_Client =26000;
	float rabais = this->objet_a_tester->getRabais(facture, 20000);
	CPPUNIT_ASSERT_EQUAL(0.08f, rabais);


}

