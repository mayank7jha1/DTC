#include<iostream>
using  namespace std;

//Scope:
/*
	Variables:


*/

int main() {

	int x = 10;//Initialisation using Copy Assignment
	int y = {10};//Copy List Initialisation
	int z{30.78};//Direct List Initialisation

	int a[] = {1, 2, 3};
	int b[] {1, 2, 4};

	int d(67);


	//Narrowing of the data.

	int xy = 15.6;
	cout << xy << endl;


}