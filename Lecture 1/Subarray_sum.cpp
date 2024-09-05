#include<iostream>
using  namespace std;

int main() {

	int n;
	cin >> n;

	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	bool ans = 0;

	for (int start = 0; start < n; start++) {
		for (int end = start; end < n; end++) {
			//My Current Subarray is from start to end.
			int sum = 0;
			for (int k = start; k <= end; k++) {
				sum += a[k];
			}

			if (sum == 0) {
				ans = 1;
			}
		}
	}

	cout << ans << endl;
}










