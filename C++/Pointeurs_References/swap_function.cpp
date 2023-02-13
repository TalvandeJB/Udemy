#include <iostream>

using namespace std;

int swap(int* a, int* b) {
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

int main() {
	int a, b;
	cout << "Entrez la valeur de a:" << endl;
	cin >> a;
	cout << "Entrez la valeur de b:" << endl;
	cin >> b;
	cout << "La valeur de a est " << a << endl;
	cout << "La valeur de b est " << b << endl;
	swap(&a, &b);
	cout << "La valeur de a est " << a << endl;
	cout << "La valeur de b est " << b << endl;


}