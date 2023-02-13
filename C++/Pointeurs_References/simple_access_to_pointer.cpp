#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
	int num{ 10 };
	cout << "Value of num:" << num << endl; //10
	cout << "Size of num:" << sizeof(num) << endl;//4
	cout << "Adress of num:" << &num << endl; //0x61ff0c

	int* p;
	cout << "Value of p:" << p << endl; //0x61ff54
	cout << "Size of p:" << sizeof(p) << endl;//4
	cout << "Adress of p:" << &p << endl; //0x61ff08

	p = nullptr;
	cout << "Value of p:" << p << endl; // 0

	//Taille d'un pointeur
	int* p1 = nullptr;
	double* p2 = nullptr;
	unsigned long long* p3 = nullptr;
	vector<string> *p4 = nullptr;
	string* p5 = nullptr;

	cout << "\nSize of p1:" << sizeof(p1) << endl; //4
	cout << "\nSize of p2:" << sizeof(p2) << endl; //4
	cout << "\nSize of p3:" << sizeof(p3) << endl; //4
	cout << "\nSize of p4:" << sizeof(p4) << endl; //4
	cout << "\nSize of p5:" << sizeof(p5) << endl; //4

	int score{ 10 };
	double high_temp{ 100.7 };
	int* score_ptr{ nullptr };
	score_ptr = &score;
	cout << "Value of score is: " << score <<  endl;
	cout << "Adress of score is: " << &score <<  endl;
	cout << "Value of score_ptr is: " << score_ptr <<  endl;



}