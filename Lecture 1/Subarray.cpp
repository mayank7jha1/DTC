#include<iostream>
using  namespace std;

int main() {

	int n;
	cin >> n;

	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}


	//I want to treat every index as the start index.
	//That means I have to go to every index.

	for (int start = 0; start < n; start++) {

		//Currently my start variable will have a
		//certain fix value.
		//Now I have to treat every index from start index
		//as the end point.


		/*

			That means for the current start variable
			having a certain value I have to go to every index
			and treat that index as the end point for the current
			subaray.

		*/

		for (int end = start; end < n; end++) {

			//Currently I will have certain  fix value of start
			//and end that means we are talking about a subarray
			//that goes from start index to end index and I want to
			//Print that subarray.


			for (int k = start; k <= end; k++) {
				cout << a[k] << " ";
			}
			cout << endl;
		}

		cout << endl;
	}
}










