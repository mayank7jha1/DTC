// 1 <= n <= 100

#include<iostream>

using namespace std;

void reverseArray(int arr[], int n, int i, int j) {


	while (i < j) {
		swap(arr[i], arr[j]);
		i++;
		j--;
	}

}

int main() {

	int arr[] = {10, 20, 30, 40, 50, 60, 70};
	int n = sizeof(arr) / sizeof(int);

	int k = 3;

	k = k % n;

	reverseArray(arr, n, 0, n - 1);
	reverseArray(arr, n, 0, k - 1);
	reverseArray(arr, n, k, n - 1);

	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}

	cout << endl;


	return 0;
}