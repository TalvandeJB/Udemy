#include <iostream>
#include <string>
#include <array>

using namespace std;

int* create_array(size_t size,int init_value = 0) {
	int* new_arr{ nullptr };
	new_arr = new int[size];
	for (size_t i = 0; i < size; i++) {
		*(new_arr+i) = init_value;
	}
	return new_arr;
}

void display(const int* const array, size_t size) {
	for (size_t i = 0; i < size; i++) {
		cout << array[i] << " ";
	}
	cout << endl;
}

int main() {
	int* my_array{ nullptr };
	size_t size;
	int init_value{};
	cout << "How many integers would you allocate in the array ?";
	cin >> size;
	cout << "What value would you like the them initialized to ?" << endl;
	cin >> init_value;
	my_array = create_array(size, init_value);
	display(my_array, size);
	delete [] my_array;
	return 0;
}