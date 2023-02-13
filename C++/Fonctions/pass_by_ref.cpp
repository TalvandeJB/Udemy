#include <iostream>
#include <string>
#include <vector>

using namespace std;

void pass_by_ref1(int& num);
void pass_by_ref2(string& num);
void pass_by_ref3(vector<string> &v);
void print_vect(const vector<string> &v);

void pass_by_ref1(int& num) {
	num = 100;
}

void pass_by_ref2(string &num) {
	num = "Changed";
}

void pass_by_ref3(vector<string> &v) {
	v.clear();//delete all vector elements

}

void print_vect(const vector<string> &v) {
	for (auto s : v) {
		cout << s << " ";
	}
	cout << endl;
}

int main() {
	int num{ 10 };
	int another_num{ 20 };

	cout << "num before calling pass_by_ref1:"<<num << endl;
	pass_by_ref1(num);
	cout << "num after calling pass_by_ref1:" << num << endl;

	cout << "another_num before calling pass_by_ref1:" << another_num << endl;
	pass_by_ref1(another_num);
	cout << "another_num after calling pass_by_ref1:" << another_num << endl;

	string name{ "Mathieu" };
	cout << "name before calling pass_by_ref2:" <<name << endl;
	pass_by_ref2(name);
	cout << "name after calling pass_by_ref2:" << name << endl;

	vector<string> names{ "Mathieu","Guillaume","Yann" };
	cout << "\nnames before calling pass_by_ref3:";
	print_vect(names);
	pass_by_ref3(names);
	cout << "\nnames after calling pass_by_ref3:";
	print_vect(names);
	cout << endl;
	return 0;
}