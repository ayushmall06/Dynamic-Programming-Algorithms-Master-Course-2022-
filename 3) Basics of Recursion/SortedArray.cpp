#include<iostream>
using namespace std;

/*-----------This is @ayushmall06 --------------*/

// Problem:-  Write a function to to check if the array is sorted.

bool checkIsSorted(int n, int arr[]) {

	// base case 
	if(n == 0 || n == 1) {
		return true;
	}

	// recursive case
	if(arr[0] < arr[1] && checkIsSorted(n-1, arr + 1)) {
		return true;
	} 
	return false;

}


int main() {

	int arr[] = {1,2,3,4,5,6,11,8,9};
	int n = sizeof(arr)/sizeof(int);

	cout << checkIsSorted(n, arr);
	
	return 0;
}