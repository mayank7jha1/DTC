#include<iostream>
#include<math.h>
#include<iomanip>
using  namespace std;
#define PI 3.141592653

double Function(double x, double b, double c) {
	return ((x * x) + (b * x) + c) / sin(x);
}

double Derivative(double x, double b, double c) {
	return (((2 * x) + b) * sin(x)) - (cos(x) * ((x * x) + b * x + c));
}

double IsThisJee(double b, double c) {

	double s = 0;
	double e = PI / 2;
	double ans = -1;

	int count = 0;

	while (s <= e) {

		double mid = (s + e) / 2;

		double val = Derivative(mid, b, c);

		if (val < 0) {
			ans = mid;
			s = mid;
		} else {
			ans = mid;
			e = mid;
		}
		count++;
		if (count > 100) {
			break;
		}
	}
	return ans;
}

int main() {
	int t;
	cin >> t;

	while (t--) {
		double b, c;
		cin >> b >> c;
		//cout << b << " " << c << endl;

		double ans1 = IsThisJee(b, c);
		cout << fixed << setprecision(7) << Function(ans1, b, c) << endl;
	}


}
