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

	int target;
	cin >> target;

	//Linear Search:
	int ans = n; //Stores the index where if element is there is found.

	for (int i = 0; i < n; i++) {
		if (a[i] == target) {
			ans = i;
			break;
		}
	}

	cout << ans << endl;
}