#include <iostream>
using namespace std;
int main() {
	double x, y;
	cin >> x >> y;
	if (y < 1) {
		cout << 1;
	}
	else {
		cout << 0;
	}
	if (y < -x) {
		cout << 1;
	}
	else {
		cout << 0;
	}
	if ((x * x) + (y * y) < 1 * 1) {
		cout << 1;
	}
	else {
		cout << 0;
	}
	if ((x - 1)*(x - 1) + y * y < 1) {
		cout << 1;
	}
	else {
		cout << 0;
	}
	return 0;
}