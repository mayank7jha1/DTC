#include<iostream>
#include<climits>

using namespace std;

// time : O(n^3)

int maximumSubarraySum(int arr[], int n) {

	int lsf = INT_MIN;

	for (int i = 0; i <= n - 1; i++) {

		for (int j = i; j <= n - 1; j++) {

			// find the sum of the subarray that starts at the ith index and ends at the jth index

			int sum = 0;

			for (int k = i; k <= j; k++) {

				sum = sum + arr[k];

			}

			lsf = max(lsf, sum);

		}

	}

	return lsf;

}

int main() {

	int arr[] = { -2, 1, -3, 4, -1, 2, 1, -5, 4};
	int n = sizeof(arr) / sizeof(int);

	cout << maximumSubarraySum(arr, n) << endl;

	return 0;
}