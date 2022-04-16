#include<iostream>
#include<vector>
using namespace std;

/*-----------This is @ayushmall06 --------------*/

vector<int> memo;

int fibo(int n) {

	// Base case
	if(n <= 2) return 1;

	// Memoisation part
	if(memo[n] != -1) return memo[n];

	// Recursive part
	return memo[n] = fibo(n-1) + fibo(n-2);
}



int main() {
	int n;
	cin >> n;
	memo.resize(n+1, -1);

	cout << fibo(n);
	
	return 0;
}