#include <iostream>
#include <vector>

using namespace std;

void print_numbers(vector<int> vect) {
	int size = vect.size();
	cout << "Numbers of the vector:" << endl;
	for (int i = 0; i < size; i++) {
		cout << "\t[" << i << "]:" << vect.at(i) << endl;
	}
	cout << "\n" << endl;
}

void mean_numbers(vector<int> vect) {
	int mean=0,sum=0;
	int size = vect.size();
	for (int i = 0; i < size; i++) {
		sum += vect.at(i);
	}
	mean = sum / size;
	cout << "The mean of the numbers of the vector is: "<<mean<<"\n"<< endl;
}

void smallest_number(vector<int> vect) {
	int min_number = vect.at(0);
	int size = vect.size();
	for (int i = 1; i < size; i++) {
		if (vect.at(i) < min_number) {
			min_number = vect.at(i);
		}
	}
	cout << "The smallest number of the vector is:" << min_number << "\n" << endl;
}

void largest_number(vector<int> vect) {
	int max_number = vect.at(0);
	int size = vect.size();
	for (int i = 1; i < size; i++) {
		if (vect.at(i) > max_number) {
			max_number = vect.at(i);
		}
	}
	cout << "The largest number of the vector is:" << max_number << "\n" << endl;
}


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