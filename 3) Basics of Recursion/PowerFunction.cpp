#include<iostream>
using namespace std;

/*-----------This is @ayushmall06 --------------*/

/* POWER FUNCTION 
   Write a function to find power of a number,
   both the number and power are given as input!*/

int pow(int a, int b) {

	//base case
	if(b == 0) {
		return 1;
	}

	// recursive case
	return a*pow(a, b-1);
}

int main() {
	int a , b;
	cin >> a >> b;
	cout << pow(a, b) << endl;
	
	return 0;
}