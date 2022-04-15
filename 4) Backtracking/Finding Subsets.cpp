#include<iostream>
using namespace std;

/*-----------This is @ayushmall06 --------------*/

/* Problem Statement */
/* Given a string, find all the subset of the given string */

void findSubsets(char* input, char* output, int i, int j) {

	//base case
	if(input[i] == '\0') {
		output[j] = '\0';

		cout << output << endl;
		return;
	}


	// Recursive case
	
	// including ith letter
	output[j] = input[i];
	findSubsets(input, output, i+1, j+1);

	// excluding ith letter
	findSubsets(input, output, i+1, j);
}


int main() {
	char input[100];
	char output[100];
	cin >> input;

	findSubsets(input, output, 0, 0);
	
	return 0;
}