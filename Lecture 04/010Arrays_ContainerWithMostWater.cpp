#include<iostream>
#include<algorithm>

using namespace std;

//  time : O(n^2)

int mostWater(int h[], int n) {

	int ans = 0;

	for (int i = 0; i <= n - 2; i++ ) {
		for (int j = i + 1; j <= n - 1; j++ ) {
			// find the area of the contained formed using the ith and jth line
			int wij = j - i;
			int hij = min(h[i], h[j]);
			int area  = wij * hij;
			ans = max(ans, area);
		}
	}

	return ans;

}

// time : O(n)

int mostWaterOptimised(int h[], int n) {

	int i = 0;
	int j = n - 1;

	int ans = 0;

	while (i < j) {

		// find the are of the containeerf formed using the ith and jth line

		int wij = j - i;
		int hij = min(h[i], h[j]);
		int area = wij * hij;

		ans = max(ans, area);

		if (h[i] < h[j]) {
			i++;
		} else {
			j--;
		}


	}

	return ans;

}

int main() {

	int h[] = {1, 8, 6, 2, 5, 4, 8, 3, 7};
	int n = sizeof(h) / sizeof(int);

	cout << mostWater(h, n) << endl;

	cout << mostWaterOptimised(h, n) << endl;

	return 0;
}