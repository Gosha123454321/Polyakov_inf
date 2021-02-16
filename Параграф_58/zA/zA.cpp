#include <iostream>
using namespace std;
int main() {
	int a, b, c = 0;
	cin >> a >> b;
	for (int i = 0; i < abs(b); i++) {
		c += abs(a);
	}
	if (a < 0 && b < 0 || a > 0 && b > 0) {
		c = abs(c);
	}
	else {
		c = -c;
	}
	cout << c;
	return 0;
}