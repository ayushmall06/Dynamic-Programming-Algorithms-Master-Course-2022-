#include<iostream>
using namespace std;

/*-----------This is @ayushmall06 --------------*/

/* Print number 1...N recursively in Decreaing Order */

void decreasingNumber(int n) {

	//base case
	if(n == 0) {
		return;
	}

	// Recursive Case 
	cout << n << " ";
	decreasingNumber(n-1);
}

int main() {
	int n;
	cin >> n;
	decreasingNumber(n);
	
	return 0;
}