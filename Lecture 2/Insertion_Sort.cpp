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


	//Code for Insertion Sort:
	/*
		Logic: Put the current element at its
		correct Postion.

		Algorithm: We are maintaining  two halfs
		one sorted and one unsorted and we are trying to
		put all the elements from the unsorted half to
		the sorted half one by one and since the first
		half is sorted the elements from unsorted half
		will be automatically placed at the correct position.


		Implement:
		We have to perform some tasks i.e put all the elements
		from unsorted to sorted half so we can say we have to
		put elements from index 1 to sorted half by presumming
		in the start that index 0 is  the element present in
		the sorted half.
	*/


	for (int i = 1; i < n; i++) {

		//For the current element:

		/*
			Find the first element that is having the
			element smaller than the current element.

			Store the current element.

			Shift all the elements from the first index
			having minimum element to the current element
			index by 1.

			we are clubbing  the above two task.

		*/

		int ce = a[i];
		int j = i - 1;

		while (j >= 0 and a[j] > ce) {
			//Shifting karte raho since you have
			//not found the first element that having
			//value smaller than the ce.

			a[j + 1] = a[j];
			j--;
		}

		//You have now the first index having element
		//which is smaller than the ce and it is
		//j index.
		a[j + 1] = ce;
	}


	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
}