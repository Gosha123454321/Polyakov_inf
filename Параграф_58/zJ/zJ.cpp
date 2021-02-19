#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int a, b;
	cin >> a >> b;
	bool isCorrect = false;
	for (int i = a; i <= b; i++) {
		int x = i;
		int count = 0;
		while (x != 0) {
			count++;
			x /= 10;
		}
		int x1 = pow(i, 2);
		int x2 = pow(10, count);
		if (x1 % x2 == i) {
			isCorrect = true;
			cout << i << ' ';
		}
	}
	if (isCorrect == false) {
		cout << -1;
	}
	return 0;
}