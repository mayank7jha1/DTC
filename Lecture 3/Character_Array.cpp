#include<iostream>
#include<cstring>
using  namespace std;

int main() {
	// int x;
	// cin >> x;

	// char ch;
	// cin >> ch;

	// cout << x << " " << ch << endl;

	// char ch;

	// while (cin >> ch) {
	// 	cout << ch;;
	// }

	// char ch;

	// while (cin.get(ch)) {
	// 	cout << ch;
	// }



	// int a[] {1, 2, 3, 4, 5, 6}; //Uniform Definition

	// //char ch = 'M';

	// char ch1[] {'M', 'a', 'y', 'a', 'n', 'k'};

	// cout << a << endl;
	// cout << a + 1 << endl;

	// cout << a[1] << endl;
	// cout << a[2] << endl;

	// for (int i = 0; i < 6; i++) {
	// 	cout << a[i] << " ";
	// }
	// cout << endl;

	// for (int i = 0; i < 6; i++) {
	// 	cout << ch1[i] << " ";
	// }

	// int n;
	// cin >> n;

	// char a[100];
	// cin >> a;
	// cout << a << endl;

	// for (int i = 0; i < n; i++) {
	// 	cin >> a[i];
	// }

	// for (int i = 0; i < 6; i++) {
	// 	cout << a[i] << " ";
	// }
	// cout << endl;


	// char ch1[] {'M', 'a', 'y', 'a', 'n', 'k', '\0'};
	// cout << ch1 << endl;

	// for (int i = 0; ch1[i] != '\0'; i++) {
	// 	cout << ch1[i];
	// }
	// cout << endl;

	// char ch2[] {"Mayank"};

	// cout << ch2 << endl;

	// for (int i = 0; ch2[i] != '\0'; i++) {
	// 	cout << ch2[i];
	// }
	// cout << endl;

	// char ch[10000];
	// // cin >> ch;
	// // cout << ch << endl;

	// cin.getline(ch, 65, '.');
	// cout << ch;


	char ch[10000];
	cin.getline(ch, 1000);
	int count = 0;
	int length = 0;

	for (int i = 0; ch[i] != '\0'; i++) {
		if (ch[i] == 'a') {
			count++;
		}

		if (ch[i] != ' ') {
			length++;
		}
	}

	cout << strlen(ch) << endl;
	cout << length << endl;

	cout << count << endl;

}