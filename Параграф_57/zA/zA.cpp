#include <iostream>
using namespace std;
int main() {
	int a, b, c;
	cin >> a >> b >> c;
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
	cout << min << endl << max;
	return 0;
}
