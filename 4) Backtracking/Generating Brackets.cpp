#include<iostream>
using namespace std;

/*-----------This is @ayushmall06 --------------*/

/* Problem Statement

	Write a function to generate all possible n pairs of 
	balanced paranthesis '(' and ')'
*/

void generateParanthesis(int n, string s,int left, int right,int i) {

	// base case
	if(left == right && right == n) {
		s[i] = '\0';
		cout << s << endl;
		return;
	}

	// if left is greater equal to right and left is less than n-1
	if( left < n) {
		s[i] = '(';
		generateParanthesis(n, s, left+1, right,  i+1 );
	}

	if(right < left) {
		s[i] = ')';
		generateParanthesis(n, s, left, right+1, i+1);
	}
}

int main() {
	int n;
	cin >> n;
	string s(2*n+1, '\0');

	generateParanthesis(n, s, 0, 0, 0);

	return 0;
}