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


	for (int i = 1; i < n; i++) {

		int ce = a[i];

		int j;//It is important to define j outside for
		//loop as i am going to use it outside for loop.

		for (j = i - 1; j >= 0 and a[j] > ce; j--) {
			a[j + 1] = a[j];
		}

		// while (j >= 0 and a[j] > ce) {
		// 	a[j + 1] = a[j];
		// 	j--;
		// }

		a[j + 1] = ce;
	}


	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
}