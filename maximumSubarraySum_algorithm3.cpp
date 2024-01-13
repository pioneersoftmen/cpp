#include <iostream>
using namespace std;

int main() {
	int best = 0, sum = 0;
	int array[] = {-1, 2, 4, -3, 5, 2, -5, 2};
	int n = sizeof(array) / sizeof(int);
	
	for (int k = 0; k < n; k++) {
		sum = max(array[k], sum + array[k]);
		best = max(best, sum);
		
	}
	
	cout << best << "\n";
}
