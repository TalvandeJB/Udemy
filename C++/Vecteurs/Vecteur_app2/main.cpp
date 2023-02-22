#include "vector_app2.h"

int main() {
    vector<int> vector1{ 1,2,3,4,5,6,7,8,9,10 };
    cout << "The sum of the products of all pairs is:" << calculate_pairs(vector1) << endl;;
    return 0;

}