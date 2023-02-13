#include <iostream>

using namespace std;

void double_data(int* ptr_int) {
	*ptr_int *= 2;
	cout << *ptr_int<<endl ;
}

int main() {
	int value = 10;
	double_data(&value);
	return 0;
}