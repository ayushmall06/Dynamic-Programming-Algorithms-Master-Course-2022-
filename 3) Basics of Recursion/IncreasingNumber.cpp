#include<iostream>
using namespace std;

/*-----------This is @ayushmall06 --------------*/

/* Print numbers 1...N recursively in increasing order */

void increasingOrder(int n) {

	// base case
	if(n == 0) {
		return;
	}

	// Recursive call
	increasingOrder(n-1);
	cout << n << " ";

}

int main() {
	int n;
	cin >> n;
	increasingOrder(n);

	return 0;
}