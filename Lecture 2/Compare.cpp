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
	int b[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> b[i];
	}

	int c[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> c[i];
	}

	int countB = 0;//Computations used in Bubble sort
	int countS = 0;//Computations used in Selection sort
	int countI = 0;//Computations used in Insertion sort


	//Bubble Sort Code:
	for (int i = 0; i < n - 1; i++) {
		countB++;
		int flag = 0;

		for (int j = 0; j < n - i - 1; j++) {
			countB++;
			if (a[j] > a[j + 1]) {
				countB++;
				flag = 1;
				swap(a[j], a[j + 1]);
			}
		}

		if (flag == 0) {
			countB++;
			break;
		}
	}

	//Insertion Sort
	for (int i = 1; i < n; i++) {

		int ce = b[i];
		countI++;

		int j;
		for (j = i - 1; j >= 0 and b[j] > ce; j--) {
			countI++;
			b[j + 1] = b[j];
		}
		countI++;
		b[j + 1] = ce;
	}


	//Selection Sort
	for (int i = 0; i < n - 1; i++) {

		int mini_index = i;
		countS++;

		for (int j = i + 1; j < n; j++) {
			countS++;
			if (c[j] < c[mini_index]) {
				countS++;
				mini_index = j;
			}
		}
		countS++;
		swap(c[mini_index], c[i]);
	}

	// for (int i = 0; i < n; i++) {
	// 	cout << a[i] << " ";
	// }

	cout << endl << endl;;

	// for (int i = 0; i < n; i++) {
	// 	cout << b[i] << " ";
	// }

	// cout << endl << endl;
	// for (int i = 0; i < n; i++) {
	// 	cout << c[i] << " ";
	// }

	cout << endl << endl;

	cout << countB << " " << countS << " " << countI << endl;

}
