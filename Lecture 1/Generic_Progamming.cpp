#include<iostream>
using  namespace std;


/*
	Templates
	Function Overloading
	Default Arguments

*/

// int Sum(int a, int b) {
// 	return a + b;
// }


// int Sum(int a, int b, int c) {
// 	return a + b + c;
// }


template<typename T1, typename T2>

T1 Sum(T1 a, T2 b, T1 c = 0, T1 d = 0) {
	return a + b + c + d;
}

// double Sum(int a, double b) {
// 	return a + b;
// }

int main() {

	cout << Sum<double, int>(2, 4) << endl;
	cout << Sum<double, int>(2, 3, 4) << endl;
	cout << Sum<double, double>(3, 4.5) << endl;
}