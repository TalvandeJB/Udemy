#include "vector_app3.h"

void print_numbers(vector<int> &vect) {
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


