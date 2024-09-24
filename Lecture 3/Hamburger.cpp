#include<iostream>
#include<cstdint>
using  namespace std;
#define int long long

int32_t main() {

	char recipe[1000];
	cin >> recipe;

	int nb, ns, nc;
	cin >> nb >> ns >> nc;

	int pb, ps, pc;
	cin >> pb >> ps >> pc;

	int r;
	cin >> r;


	int sb = 0, ss = 0, sc = 0;

	for (int i = 0; i < strlen(recipe); i++) {
		if (recipe[i] == 'B') {
			sb++;
		} else if (recipe[i] == 'S') {
			ss++;
		} else {
			sc++;
		}
	}

	//cout << sb << " " << ss << " " << sc << endl;
	int s = 0;
	int e = 1e13;

	int ans = - 1;

	while (s <= e) {

		int mid = (s + e) / 2;

		int TBP = 0;//Total Bread Price for Mid Hamburger
		int TSP = 0;//Total Sausage Price for Mid Hamburger
		int TCP = 0;//Total Cheese Price for Mid Hamburger

		int TP = 0;//Total Price for Mid Hamburger

		TBP = ((sb * mid) - nb) * pb;
		if (TBP < 0) {
			TBP = 0;
		}

		TSP = ((ss * mid) - ns) * ps;
		if (TSP < 0) {
			TSP = 0;
		}

		TCP = ((sc * mid) - nc) * pc;
		if (TCP < 0) {
			TCP = 0;
		}

		TP = TSP + TBP + TCP;

		if (TP <= r) {
			ans = mid;
			s = mid + 1;
		} else {
			e = mid - 1;
		}
	}


	cout << ans << endl;


}