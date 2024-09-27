// constraints : n <= 100

#include<iostream>
#include<climits>

using namespace std;

// total time = n + n^2 ~ n^2.const ~ O(n^2)
// total space = n+1 ~ n due to csum[]

int main() {

	int arr[] = { -2, 1, -3, 4, -1, 2, 1, -5, 4};
	int n = sizeof(arr) / sizeof(int);

	int csum[101];
	csum[0] = 0;

	for (int i = 1; i <= n; i++) { // n steps
		csum[i] = csum[i - 1] + arr[i - 1];
	}

	for (int i = 0; i <= n; i++) {
		cout << csum[i] << " ";
	}

	cout << endl;

	int lsf = INT_MIN;

	for (int i = 0; i <= n - 1; i++) { // n^2 steps

		for (int j = i; j <= n - 1; j++) {

			// find the sum of the subarray that starts at the ith index and ends at the jth index

			int sum = csum[j + 1] - csum[i];

			lsf = max(lsf, sum);

		}

	}

	cout << lsf << endl;

	return 0;
}