#include <iostream>

using namespace std;

int* biggest_nb(int* nb1, int* nb2) {
	if (*nb1 > *nb2) {
		return nb1;
	}
	else {
		return nb2;
	}
}

int main() {
	int nb1{ 12 }, nb2{ 8 };
	cout << "The largest number is :" <<*(biggest_nb(&nb1, &nb2)) << endl;
	return 0;
}