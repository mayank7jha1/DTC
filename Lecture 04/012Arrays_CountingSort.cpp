// contraints : n <= 100, k <= 9

#include<iostream>

using namespace std;

// total steps = 2n
// time = 2n.c ~ O(n)
// space = k+1 ~ k i.e. O(k) due to freq[]

int main() {

	int arr[] = {1, 0, 3, 2, 3, 1, 2, 0, 2};
	int n = sizeof(arr) / sizeof(int);

	int k = 3; // denotes the maximum element in the array

	int freq[10] = {0};

	for (int i = 0; i < n; i++) { // n-steps
		int x = arr[i];
		freq[x]++;
	}

	// for (int i = 0; i <= k; i++) {
	// 	cout << "freq(" << i << ") = " << freq[i] << endl;
	// }

	for (int i = 0; i <= k; i++) { // n-steps

		// print 'i' freq[i]

		for (int j = 1; j <= freq[i]; j++) {
			cout << i << " ";
		}



	}

	return 0;
}