#include <iostream>

using namespace std;

unsigned long long fibonacci(unsigned long long n);
unsigned long long factorial(unsigned long long n);

unsigned long long factorial(unsigned long long n) {
	if (n == 0) {
		return 1;
	}
	else {
		return factorial(n - 1) * n;
	}
}

unsigned long long fibonacci(unsigned long long n) {
	if (n <= 1) {
		return n;
	}
	else {
		return fibonacci(n - 1) + fibonacci(n - 2);
	}
}

int main() {
	//Fibonacci
	unsigned long long nb1=0;
	cout << "Saisissez la valeur de n1:";
	cin >> nb1;
	cout << "La suite de fibonacci avec n=" << nb1 << " est de:" << fibonacci(nb1) << endl;
	//Factorial
	unsigned long long nb2 = 0;
	cout << "Saisissez la valeur de n2:";
	cin >> nb2;
	cout << "La suite de fibonacci avec n=" << nb2 << " est de:" << factorial(nb2) << endl;
	return 0;

}