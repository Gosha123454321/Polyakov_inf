#include <iostream>
using namespace std;
int main() {
	int a, b, c, d, e;
	cin >> a >> b >> c >> d >> e;
	int max = a;
	int min = a;
	if (b > max) {
		max = b;
	}
	if (b < min) {
		min = b;
	}
	if (c > max) {
		max = c;
	}
	if (c < min) {
		min = c;
	}
	if (d > max) {
		max = d;
	}
	if (d < min) {
		min = d;
	}
	if (e > max) {
		max = e;
	}
	if (e < min) {
		min = e;
	}
	cout << min << endl << max;
	return 0;
}
