#include <iostream>
#include <string>

using namespace std;

typedef struct Personne {
	int age;
	double height;
	string name;
	char gender;
}personne;


void affichage_donnees(personne Perso) {
	cout << "Nom:" << Perso.name << endl;
	cout << "Height:" << Perso.height << endl;
	cout << "Age:" << Perso.age << endl;
	cout << "Gender:" << Perso.gender << endl;

}



int main() {
	personne P1;
	std::cout << "Affichez un l'age :"<<std::endl;
	std::cin >> P1.age;
	std::cout << "Affichez la taille :" << std::endl;
	std::cin >> P1.height;
	std::cout << "Affichez le nom :" << std::endl;
	std::cin >> P1.name;
	std::cout << "Affichez le genre :" << std::endl;
	std::cin >> P1.gender;
	affichage_donnees(P1);
	
	return 0;

}