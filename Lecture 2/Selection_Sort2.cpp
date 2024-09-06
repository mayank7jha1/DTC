#include<iostream>
using  namespace std;

int main() {
	int n;
	cin >> n;

	int a[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}


	for (int i = 0; i < n - 1; i++) {

		int mini_index = i;

		for (int j = i + 1; j < n; j++) {
			if (a[j] < a[mini_index]) {
				mini_index = j;
			}
		}

		swap(a[mini_index], a[i]);
	}

	for (int i = 0; i < n; i++) {
		cout << a[i] << ' ';
	}

}