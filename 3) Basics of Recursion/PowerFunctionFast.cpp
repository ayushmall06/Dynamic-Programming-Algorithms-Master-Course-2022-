#include<iostream>
using namespace std;

/*-----------This is @ayushmall06 --------------*/
int powerFunFast(int a, int b) {

	// base case
	if(b == 0) {
		return 1;
	}

	// Recursive case
	int subProb = powerFunFast(a, b/2);
	subProb = subProb*subProb;
	if(b&1) {
		subProb = subProb*a;
	}
	return subProb;


}

int main() {

	int a, b;
	cin >> a >> b;
	cout << powerFunFast(a, b) << endl;
	
	return 0;
}