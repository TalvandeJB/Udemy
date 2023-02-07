#include <vector>
#include <iostream>

using namespace std;

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

int main() {
	//vector<char> vowels; //empty
	//vector<char> vowels(5); // 5 initialized to 0
	vector<char> vowels{ 'a','e','i','o','u','y' };
	cout << "Vowels vector:" << endl;
	display_vector_char(vowels, 6);

	//Display as an array
	cout << vowels[1] << endl;
	cout << vowels[4] << endl;

	//vector<int> test_scores(3); //3 initialized to 0
	//vector<int> test_scores(3, 100); // 3 initialized to 100

	vector<int> test_scores{ 100,22,5,24 };
	cout << "\tArray syntax :" << endl;
	//Display as an array
	cout << test_scores[2] << endl;
	cout << test_scores[1] << endl;

	cout << "\tVector syntax :"<<endl;
	display_vector_int(test_scores, 4);
	
	;

	cout << "Enter the four scores of the vector :" << endl;
	cin >> test_scores.at(0);
	cin >> test_scores.at(1);
	cin >> test_scores.at(2);
	cin >> test_scores.at(3);

	cout << "Updated scores :" << endl;
	/*cout <<"[0]:" << test_scores.at(0) << endl;
	cout <<"[1]:"<< test_scores.at(1) << endl;
	cout <<"[2]:"<< test_scores.at(2) << endl;
	cout <<"[3]:"<< test_scores.at(3) << endl;*/
	display_vector_int(test_scores, 4);
	size_vector(test_scores);

	int score_to_add;
	cout << "Enter a score to add:" << endl;
	cin >> score_to_add;
	test_scores.push_back(score_to_add);
	cout << "Updated scores with the new score :" << endl;
	display_vector_int(test_scores, 5);
	size_vector(test_scores);

	cout << "Example of 2D_vector" << endl;
	vector <vector<int>> vector_2D{
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12}
	};
	display_2D_vector(vector_2D, 3, 4);








	return 0;
}