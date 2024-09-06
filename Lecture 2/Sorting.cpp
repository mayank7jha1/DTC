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

	//Bubble Sort Code:

	//Perform a Certain number of tasks.

	for (int i = 0; i < n - 1; i++) {

		//While Performing the current task
		//perform a certain number of subtasks.
		int flag = 0;

		for (int j = 0; j <= n - i - 1; j++) {

			//For the Current Subtask Compare with
			//adjacent and swap.

			if (a[j] > a[j + 1]) {
				flag = 1;
				swap(a[j], a[j + 1]);
			}
		}

		if (flag == 0) {
			break;
		}
	}

	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
}







