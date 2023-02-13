#include <iostream>

using namespace std;

int main() {
	int scores[]{ 1,5,2,20,100,-1};
	int* scores_ptr = scores;
	while (*scores_ptr != -1) {
		cout << *scores_ptr << endl;
		scores_ptr++;
	};
	cout << "________________________________________" << endl;
	scores_ptr = scores;
	while (*scores_ptr != -1) {
		cout << *scores_ptr++ << endl;
	}
	cout << "--------------String pointer Arithmetics--------------------" << endl;
	string s1{ "Mathieu" };
	string s2{ "Caro" };
	string s3{ "Mathieu" };
	string* p1 = &s1;
	string* p2 = &s2;
	string* p3 = &s1;
	cout << p1 << " == " << p2 << " : " << (p1 == p2) << endl;
	cout << *p1 << " == " << *p2 << " : " << (*p1 == *p2) << endl;
	cout << p1 << " == " << p3 << " : " << (p1 == p3) << endl;
	cout << *p1 << " == " << *p3 << " : " << (*p1 == *p2) << endl;
	p3 = &s3;
	cout << p1 << " == " << p3 << " : " << (p1 == p3) << endl;
	cout << *p1 << " == " << *p3 << " : " << (*p1 == *p3) << endl;

	/*cout << "--------------Char pointer Arithmetics--------------------" << endl;
	char name[] = "Mathieu";
	char *pt_char1 = nullptr;
	char *pt_char2 = nullptr;
	pt_char1 = &name[0];
	pt_char1 = &name[5];
	cout << "In the string "<<name<<","<< *pt_char2 << " is " << (pt_char2 - pt_char1) << " characters away from " << *pt_char1 << endl;
	cout << endl;*/
	return 0;

}