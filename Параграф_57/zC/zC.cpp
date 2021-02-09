#include <iostream>
using namespace std;
int main() {
	int a, b, c, max = 0;
	cin >> a >> b >> c;
	if (a == b && b == c) {
		cout << 'O';
		return 0;
	}
	if (a >= max) {
		max = a;
	}
	if (b >= max) {
		max = b;
	}
	if (c >= max) {
		max = c;
	}
	if (max == a) {
		cout << "A ";
	}
	if (max == b) {
		cout << "B ";
	}
	if (max == c) {
		cout << "C ";
	}
	return 0;
}