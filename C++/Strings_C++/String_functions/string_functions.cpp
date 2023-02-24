#include <iostream>
#include <string>

using namespace std;

int main() {

	//Initialization
	string s0;
	string s1{ "Apple" };
	string s2{ "Banana" };
	string s3{ "Kiwi" };
	string s4{ "apple" };
	string s5{ s1 }; //Apple
	string s6{ s1,0,3 };//App
	string s7(10, 'X');//XXXXXXXXXX

	cout << s0 << endl; //No garbage
	cout << s0.length() << endl; //empty string

	//Concatenation
	cout << "\n Concatenation \n";
	string s8 = s1 + " and " + s2; //Apple and Banana
	cout << s8 << endl;
	// Subtraction
	cout << "\n Subtraction \n";
	string s9 = "This is a test";
	cout << s9.substr(0, 4) << endl; //This
	cout << s9.substr(5, 2) << endl; //is
	cout << s9.substr(10, 4) << endl;//test
	//Erase
	cout << "\n Erase \n";
	s9.erase(0, 4);
	cout << "Now s9 is: " << s9 << endl;
	//Getline
	string fullname;
	cout << "Enter your full name:" << endl;
	getline(cin, fullname);
	cout << "Your fullname is : " << fullname << endl;
	//Find
	string s10 = "What is your name and your first name ? How old are you ?";
	string word;
	cout << "Enter a word to find" << endl;
	cin >> word;
	size_t position = s10.find(word);
	if (position != string::npos) {
		cout << "Find " << word << " at position:" << position << endl;
	}
	else {
		cout << "Not found !";
	}
	return 0;

	

}