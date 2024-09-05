#include<iostream>
#include<climits>
using  namespace std;

int main() {
	int n;
	cin >> n;

	int a[n];
	int pre[n];
	int maxi = INT_MIN;
	int mini = INT_MAX;

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	pre[0] = a[0];


	for (int i = 1; i < n; i++) {
		pre[i] = pre[i - 1] + a[i];

		if (pre[i] > maxi) {
			maxi = pre[i];
		}
	}

	for (int i = 0; i < n; i++) {
		cout << pre[i] << " ";
	}

	cout << endl;

	int freq[maxi + 1] {0};

	for (int i = 0; i < n; i++) {
		int Element = pre[i];
		freq[Element]++;
	}

	for (int i = 0; i < maxi - mini + 1; i++) {
		cout << i << " " << freq[i] << endl;
	}

	cout << endl;


	if (freq[0] > 0) {
		cout << "Yes" << endl;
		return 0;
	}

	for (int i = 1; i < maxi + 1; i++) {
		if (freq[i] > 1) {
			cout << "Yes" << endl;
			return 0;
		}
	}

	cout << "No" << endl;


}