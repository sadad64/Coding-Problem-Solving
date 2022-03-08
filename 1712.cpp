#include <iostream>
#include <vector>

using namespace std;

int main() {
	int a;
	int b;
	int c;
	int i;

	cin >> a >> b >> c;

	if (b >= c) {
		cout << "-1";
	}
	else {
		i = a / (c - b) + 1;
	}

	cout << i;

	return 0;
}
