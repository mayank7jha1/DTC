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

	for (int i = 0; i < n; i++) {

		int current_element = a[i];
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