#include <iostream>

using namespace std;

void min_max(int* pt_tab, int n, int* min, int* max) {
	*min = *pt_tab;
	*max = *pt_tab;
	for (int *i = pt_tab; i < pt_tab + n; i++) {
		if (*min > *i) {
			*min = *i;
		}
		else if (*max < *i) {
			*max = *i;
		}
	}
}

int main() {
	int tab[10]{ 1,8,35,100,67,4,58,29,75,45 };
	int min, max;
	min_max(tab, 10, &min, &max);
	cout << "The maximum value of the tab is :" << max << endl;
	cout << "The minimum value of the tab is :" << min << endl;

}