#include<iostream>

using namespace std;

// for an array of size n, it has n(n-1)/2 pairs ~ n^2

void generatePairs(int arr[], int n) {

	for (int i = 0; i <= n - 2; i++) {

		for (int j = i + 1; j <= n - 1; j++) {

			cout << arr[i] << " " << arr[j] << endl;

		}

		cout << endl;

	}

}

int main() {

	int arr[] = {10, 20, 30, 40, 50};
	int n = sizeof(arr) / sizeof(int);

	generatePairs(arr, n);

	return 0;
}