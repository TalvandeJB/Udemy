#include "vector_app1.h"

void display_vector_int(vector<int> vector, int size) {
	for (int i = 0; i < size; i++) {
		cout <<"\t["<<i<<"]:"<< vector.at(i) << endl;
	}
}

void display_vector_char(vector<char> vector, int size) {
	for (int i = 0; i < size; i++) {
		cout <<"\t[" << i << "]:" << vector.at(i) << endl;
	}
}

void size_vector(vector<int> vector) {
	int size = vector.size();
	cout << "There are " << vector.size() << " scores in the vector\n" << endl;
}

void display_2D_vector(vector <vector<int>> vector_X,int size_x, int size_y) {
	for (int i = 0; i < size_x; i++) {
		for (int j = 0; j < size_y; j++) {
			cout << "[" << i << "][" << j << "]:" << vector_X.at(i).at(j) << endl;
		}
	}
}

