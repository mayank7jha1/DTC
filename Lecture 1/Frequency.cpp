#include<iostream>
#include<climits>
using  namespace std;

int main() {
	int n;
	cin >> n;

	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	//I will iterate over the entire array in order to
	//calculate frequency of all the unique elements.

	for (int i = 0; i < n; i++) {
		int current_element = a[i];

		//Currently I am Standing at a particular index
		//and element of this index is a[i].

		/*

			1. Check whether the current element is INT_MAX or not.

			If it is INT_MAX that means you have already calculated
			the current element frequency and we don't need to calculate
			it again as it is no longer a unique element


			2. If Is is not INT MAX then just find all the elements
			from 0 to n-1 index that has the same value as the
			current element update the count and also while doing this
			make sure to make the element now as INT_MAX so as not
			to calculate its frequency agaain.

		*/


		if (current_element != INT_MAX) {
			int count = 0;
			for (int j = 0; j < n; j++) {

				if (a[j] == current_element) {
					count++;
					a[j] = INT_MAX;
				}
			}

			cout << current_element << " " << count << endl;
		}

	}

}