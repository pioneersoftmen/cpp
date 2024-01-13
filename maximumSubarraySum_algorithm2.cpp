#include <iostream>
using namespace std;

int main() {
	int best = 0;
	int array[] = {-1, 2, 4, -3, 5, 2, -5, 2};
	int n = sizeof(array) / sizeof(int);
	for (int a = 0; a < n; a++) {
		int sum = 0;
		for (int b = a; b < n; b++) {
			sum += array[b];
			best = max(best, sum);
		}
	}


	cout << best << "\n";
	return 0;
	
}
