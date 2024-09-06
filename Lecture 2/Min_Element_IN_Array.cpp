#include<iostream>
using  namespace std;
#include<climits>//Header File for INT_MAX/INT_MIN

int main() {
	int n;
	cin >> n;

	int a[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}


	//Finding the Minimum Element in the array.
	int mini = INT_MAX; //Maximum Possible integer value
	//I can store in a integer variable.

	int mini_index = -1;

	for (int i = 0; i < n; i++) {
		if (a[i] < mini) {
			mini = a[i];
			mini_index = i;
		}
	}

	cout << mini_index << " " << mini << endl;
}










