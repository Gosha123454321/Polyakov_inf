#include <iostream>
using namespace std;
int main() {
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	bool isDetected = false;
	for (int i = 10000; i < 100000; i++) {
		int x = i;
		if (x % a == b && x % c == d) {
			cout << x << ' ';
			isDetected = true;
		}
	}
	if (!isDetected) {
		cout << -1;
	}
	return 0;
}