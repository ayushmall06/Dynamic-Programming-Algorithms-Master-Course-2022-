#include<iostream>
#include<vector>
using namespace std;

/*-----------This is @ayushmall06 --------------*/

int fib(int n) {
	vector<int> arr(n+1);

	if(n <= 2) return 1;

	arr[1] = arr[2] =  1;

	for(int i = 3; i <= n; i++) {
		arr[i] = arr[i-1] + arr[i-2];
	}
	return arr[n];

}

int main() {
	int n;
	cin >> n;
	cout << fib(n);
	
	return 0;
}