#include<iostream>
using namespace std;

/*-----------This is @ayushmall06 --------------*/

/* Problem Statement -- Tiling Problem
	
	Count the number of binary strings with no consecutive
	ones that can be formed using a binary string of length n.
*/

int totalStrings(int n) {

	//base case 
	if(n == 0 || n == 1) {
		return 1;
	}

	// Recursive case
	return totalStrings(n-2) + totalStrings(n-1);
}

int main() {

	int n;
	cin >> n;
	cout << totalStrings(n) << endl;
	
	return 0;
}