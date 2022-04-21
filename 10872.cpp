#include <iostream>
#include <vector>

using namespace std;

int factorial(int n) {
	if (n > 2) {
		n *= factorial(n - 1);
	}
	return n;
}

int main() {
	int n = 1;
	int res = 1;
	cin >> n;

	if (n != 0) {
		res = factorial(n);
	}

	cout << res;
}
