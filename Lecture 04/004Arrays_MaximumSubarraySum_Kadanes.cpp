// constraints : n <= 100

#include<iostream>

using namespace std;

int main() {

	int arr[] = { -3, 2, -1, 4, -5};
	int n = sizeof(arr) / sizeof(int);

	// // time : O(n)
	// // space: O(n) due to x[]

	// int x[100]; // based on constraints
	// x[0] = arr[0];
	// int lsf = x[0];

	// for (int i = 1; i <= n - 1; i++) {
	// 	x[i] = max(x[i - 1] + arr[i], arr[i]);
	// 	lsf = max(lsf, x[i]);
	// }

	// cout << lsf << endl;

	// time : O(n)
	// space: O(1)

	int x; // based on constraints
	x = arr[0]; // x repr x[0]
	int lsf = x;

	for (int i = 1; i <= n - 1; i++) {
		x = max(x + arr[i], arr[i]);
		lsf = max(lsf, x);
	}

	cout << lsf << endl;

	// for (int i = 0; i < n; i++) {
	// 	cout << x[i] << " ";
	// }

	// cout << endl;

	return 0;
}