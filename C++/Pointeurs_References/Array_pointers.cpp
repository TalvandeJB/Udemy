#include <iostream>
#include <string>
using namespace std;

int main() {
	int scores[]{ 1,2,5,10,20 };
	cout << scores << endl;  //Adress of the 1st element
	cout << *scores << endl; //Value of the 1st element

	int *ptr_scores = scores;
	cout << ptr_scores << endl;
	cout << *ptr_scores << endl;

	//Access of the element of the array
	cout << "[0]:" << ptr_scores[0] << endl;
	cout << "[1]:" << ptr_scores[1] << endl;
	cout << "[2]:" << ptr_scores[2] << endl;

	//Adress of the elements of the array
	cout << "[0]:" << ptr_scores << endl;
	cout << "[1]:" << (ptr_scores+1) << endl;
	cout << "[2]:" << (ptr_scores+2) << endl;

	return 0;
}