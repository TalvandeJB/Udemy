#include <string>
#include <iostream>

using namespace std;

int main() {
	string s1,s2,s3;
	cout << "Rentrez une chaine de caracteres : (cin) "<< endl;
	//cin >> s1; //accept only the first word
	//cout << s1 << endl;
	//getline(cin,s2);  // read entire line until '/n'
	//cout << s2 << endl;
	getline(cin, s3, 'M');
	cout << s3 << endl;


	return 0;

}