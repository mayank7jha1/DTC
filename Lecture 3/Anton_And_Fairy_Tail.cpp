#include<iostream>
using  namespace std;
#define int long long

int32_t main() {
	int n, m;
	cin >> n >> m;

	if (m >= n) {
		cout << n << endl;
		return 0;
	}


	int s = 0;
	int e = 1e10;//1*10^10
	int ans = -1;

	while (s <= e) {

		int mid = (s + e) / 2;

		int Value = (mid * (mid + 1)) / 2;
		int target = n - m;

		if (Value >= target) {
			ans = mid;
			e = mid - 1;

		} else {
			s = mid + 1;
		}
	}

	cout << ans + m << endl;

}