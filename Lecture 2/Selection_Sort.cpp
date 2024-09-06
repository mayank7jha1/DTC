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


	//Selection Sort Code:

	//Find the smallest n-2 times and Put it at its correct
	//Position.


	//Task: Find the smallest Certain number of times.

	for (int i = 0; i < n - 1; i++) {

		//For the Current Task Number which is:
		//Task i find the ith smallest elment from
		//the range i to n-1 and swap it with
		//ith index.

		int mini_index = i;
		//You are preassuming that the smallest element in the
		//range of index from i to n-1 index is a[i] only
		//and hence for the time being storing it.

		//Now check in range for index i+1 to n-1 koi
		//aur element to nahi hain jo current element i.e
		//a[mini_index] se chota hai.

		for (int j = i + 1; j < n; j++) {
			if (a[j] < a[mini_index]) {
				mini_index = j;
			}
		}

		//Now I have the smallest element in the rrange
		//of i  to n-1 index and since we ar here trying
		//to find the ith smallest element.

		//Put the ith smallest element in its correct position.

		swap(a[mini_index], a[i]);
	}

	for (int i = 0; i < n; i++) {
		cout << a[i] << ' ';
	}

}