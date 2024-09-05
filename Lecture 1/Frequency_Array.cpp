#include<iostream>
#include<climits>
using  namespace std;

int main() {
	int n;
	cin >> n;

	int a[n];
	int ans = INT_MIN;

	for (int i = 0; i < n; i++) {
		cin >> a[i];

		if (a[i] > ans) {
			ans = a[i];
		}
	}

	int freq[ans + 1] {0};

	//Iterate over the initial array.
	for (int i = 0; i < n; i++) {
		int current_element = a[i];
		freq[current_element]++;
	}


	//Print the Frequency Array.

	//Now I want to iterate over the freq array.
	for (int i = 0; i < ans + 1; i++) {

		int Element = i;
		int Element_Frequency = freq[i];

		if (Element_Frequency > 0) {
			cout << Element << " " << Element_Frequency << endl;
		}

	}

}

