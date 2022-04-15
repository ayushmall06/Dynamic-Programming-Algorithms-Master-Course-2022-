#include<iostream>
using namespace std;

/*-----------This is @ayushmall06 --------------*/

/* Problem Statement -- Tiling Problem 
   
   Given a "4 x n" board and tiles of size "4 x 1",
   Count the number of ways to tile the given board 
   using the "4 x 1" tiles.

   The tile can be either placed horizontally or vertically.

   Input - n
*/ 

int countWays(int n) {

	// base case 
	if(n < 4) {
		return 1;
	} 



	// recusive case 
	return countWays(n-1) + countWays(n-4);

}



int main() {
	int n;
	cin >> n;
	cout << countWays(n) << endl;

	return 0;
}