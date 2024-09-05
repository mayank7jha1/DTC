#include<iostream>
#include<climits>
using  namespace std;

int main() {
	int n;
	cin >> n;

	int a[n];
	int maxi = INT_MIN;
	int mini = INT_MAX;

	for (int i = 0; i < n; i++) {
		cin >> a[i];

		if (a[i] > maxi) {
			maxi = a[i];
		}

		if (a[i] < mini) {
			mini = a[i];
		}
	}

	int freq[maxi - mini + 1] {0};

	//Iterate over the initial array.
	for (int i = 0; i < n; i++) {
		int current_element_index = a[i];
		int shifted_index = current_element_index - mini;
		freq[shifted_index]++;
	}


	//Print the Frequency Array.

	//Now I want to iterate over the freq array.
	for (int i = 0; i < maxi - mini + 1; i++) {

		int Element = i + mini;
		int Element_Frequency = freq[i];

		if (Element_Frequency > 0) {
			cout << Element << " " << Element_Frequency << endl;
		}

	}

}

