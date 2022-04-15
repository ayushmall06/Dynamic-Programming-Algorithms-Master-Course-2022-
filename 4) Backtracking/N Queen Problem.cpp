#include<iostream>
using namespace std;
#define MAX 12
/*-----------This is @ayushmall06 --------------*/


void printBoard(int board[][MAX], int n) {

	for (int i = 0; i < n; ++i)
	{
		for(int j = 0; j < n; j++) {
			cout << board[i][j] << " ";
		} 
		cout << endl;
	}
	cout << endl;
}

bool isSafeChance(int board[][MAX], int n, int i, int j) {

	int x = i;
	int y = j;

	// Check row
	while(y >= 0) {
		if(board[x][y] != 0) return false;
		y--; 
	}

	x = i;
	y = j;

	//Check column

	while(x >= 0) {
		if(board[x][y] != 0) return false;
		x--; 
	}

	x = i;
	y = j;

	// Check Left diagonal
	while(x >= 0 && y >= 0) {
		if(board[x][y] != 0) return false;
		y--; 
		x--;
	}

	x = i;
	y = j;

	// Check Right Diagonal
	while(x >= 0 && y <= n) {
		if(board[x][y] != 0) return false;
		y++; 
		x--;
	}

	return true;


}

int solveNQueen(int board[][MAX], int i, int n) {
	

	//base case
	if(i == n) {
		// do something
		printBoard(board, n);

		 return 1;
	}

	int ways = 0; 

	for(int j = 0; j < n; j++) {
		if(isSafeChance(board, n, i, j)) {
			
			board[i][j] = 1;

			ways += solveNQueen(board, i+1, n);
			
		}

		// backtrack
		board[i][j] = 0;
	}
	return ways;
	
}

int main() {
	int board[MAX][MAX] = {0};
	int n;
	cin >> n;
	int ans = solveNQueen(board, 0, n);
	cout << endl << endl; 
	cout << "Number of ways :" << ans; 
	return 0;
}