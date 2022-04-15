#include<iostream>
using namespace std;

/*-----------This is @ayushmall06 --------------*/

//returns the fibonacci number
int fibonacci(int n) {

	//base case
	if(n == 0 || n == 1) {
		return n;
	}

	// recursive case
	return fibonacci(n-1) + fibonacci(n-2);
}



int main() {
	int n;
	cin >> n;
	cout << fibonacci(n) << endl;
	
	return 0;
}