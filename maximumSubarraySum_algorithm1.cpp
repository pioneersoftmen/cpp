#include <iostream>
using namespace std;
int main() {
	int best = 0;
	int array[] = {-1, 2, 4, -3, 5, 2, -5, 2};
	int n = sizeof(array)/ sizeof(array[0]);
	for (int a = 0; a < n; a++) {
		for (int b = a; b < n; b++) {
			int sum = 0;
			for (int k = a; k <= b; k++) {
				sum += array[k];
			}
			best = max(best, sum);
		}
	}

	cout << best << "\n";
	return 0;
}


