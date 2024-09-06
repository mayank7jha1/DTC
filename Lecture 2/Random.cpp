#include<iostream>
#include<set>
using  namespace std;

int main() {

	srand(time(0));
	int n = 1 + rand() % 10005;
//	cout << n << endl;
	set<int>st;
	for (int i = 0; i < n; i++) {
		st.insert(1 + rand() % 10003);
	}

	cout << st.size() << endl;
	for (auto x : st) {
		cout << x << " ";
	}

}