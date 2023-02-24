#include <iostream>
#include <string>

using namespace std;

int main() {
	string letter_string;
	cin >> letter_string;
	string first = letter_string.substr(0, 1);
	int size = letter_string.size();
	int start = 1;
	for (int i = 0; i < size; i++) {
		for (int j = start; j < size; j++) {
			cout << " ";
		}
		start++;
		if (i >= 1) {
			first = first + letter_string.substr(i, 1);
			first = letter_string.substr(i, 1) + first;
			cout << first << "\n";
		}
		else {
			cout << first << "\n";
		}
	}
}