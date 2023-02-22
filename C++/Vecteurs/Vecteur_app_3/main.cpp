#include "vector_app3.h"

int main() {
	vector<int> vector1{ 1,2,3,4,5 };
	int choice;
	while (choice != 5) {
		cout << "\tMenu options:" << endl;
		cout << "1: Print numbers" << endl;
		cout << "2: Display mean of the number" << endl;
		cout << "3: Display the smallest number" << endl;
		cout << "4: Display the largest number" << endl;
		cout << "5: Quit the program" << endl;
		cin >> choice;
		switch (choice) {
		case 1:
			print_numbers(vector1);
			break;
		case 2:
			mean_numbers(vector1);
			break;
		case 3:
			smallest_number(vector1);
			break;
		case 4:
			largest_number(vector1);
			break;
		}
	}
	return 0;
}