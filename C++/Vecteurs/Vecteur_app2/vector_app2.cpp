#include "vector_app2.h"

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