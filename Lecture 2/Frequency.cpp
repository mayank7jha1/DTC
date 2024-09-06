#include<iostream>
using  namespace std;
int n;
int x;
int s, e;
int a[100001];

int Upper_Bound() {
	int s = 0, e = n - 1;
	int ans = n;


	while (s <= e) {
		int mid = (s + e) / 2;

		if (a[mid] > x) {
			ans = mid;
			e = mid - 1;
		} else {
			s = mid + 1;
		}
	}
	return ans;
}

int Lower_Bound() {
	int s = 0, e = n - 1;
	int ans = n;


	while (s <= e) {
		int mid = (s + e) / 2;

		if (a[mid] >= x) {
			ans = mid;
			e = mid - 1;
		} else {
			s = mid + 1;
		}
	}
	return ans;
}

int main() {
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	cin >> x;

	//Find the frequency of x in array
	//in  log(n) Computation

	// cout << Upper_Bound() << endl;
	// cout << Lower_Bound() << endl;

	cout << Upper_Bound() - Lower_Bound() << endl;
}