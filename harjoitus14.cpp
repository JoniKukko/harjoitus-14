/******************************************
* Teht„v„: Harjoitus 14
* Tekij„: Joni Kukko
* PVM: 08.10.2013
* Kuvaus:
*   Tee ohjelma, joka kysyy henkil”tietosi seuraavasti:
*	Anna (kaikki) etunimesi (merkkijono): 
*	Anna kengannumero (kokonaisluku): 
*	Anna sukunimi (merkkijono): 
*	Anna koulumatka (reaaliluku): 
*	Anna osoitteesi: 
*	Anna postinumero:
*	Ohjelma tulostaa tiedot seuraavasti: 
*	sukunimi etunimet osoite postinumero kengannumero ja koulumatka
* 
*	K„yt„ C++:n cin- ja cout-olioita ohjelman toteuttamiseen.
******************************************/

#include <iostream> 

int main() {
	
	char etunimi[50] = "",  sukunimi[50] = "", osoite[50] = "", postinumero[6] = "";
	int kengannumero = 0;
	float koulumatka = 0.0;

	std::cout << "Anna (kaikki) etunimesi (merkkijono): ";
	std::cin.get(etunimi, 50);

	std::cout << "Anna keng„nnumero (kokonaisluku): ";
	std::cin >> kengannumero;
	
	std::cout << "Anna sukunimi (merkkijono): ";
	std::cin.get();
	std::cin.get(sukunimi, 50);

	std::cout << "Anna koulumatka (reaaliluku): ";
	std::cin >> koulumatka;

	std::cout << "Anna osoitteesi: ";
	std::cin.get();
	std::cin.get(osoite, 50);

	std::cout << "Anna postinumero: ";
	std::cin.get();
	std::cin.get(postinumero, 6);

	std::cout << "\n" << sukunimi << " " << etunimi << ", " << osoite << " " << postinumero << ", " << kengannumero << ", " << koulumatka << "km" << std::endl;


}
  
  