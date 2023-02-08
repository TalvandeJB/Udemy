#include <iostream>
#include <string>

using namespace std;

#include <vector>
using namespace std;

int calculate_pairs(vector<int> vec) {
    int result;
    int taille = vec.size();
    result = 0;
    for (int i = 0; i < taille; i++) {
        for (int j = i + 1; j < vec.size(); j++) {
            result += vec.at(i) * vec.at(j);
        }
    }
    return result;
}


int main() {
	vector<int> vector1{1,2,3,4,5,6,7,8,9,10};
    cout << "The sum of the products of all pairs is:" << calculate_pairs(vector1) << endl;;
    return 0;

}