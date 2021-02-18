#include <iostream>
using namespace std;
int main() {
	int a, b;
	cin >> a >> b;
	for (int i = a; i <= b; i++) {
		int x = i;
		bool f = true;
		while (x != 0) {
			int c = x % 10;
			if (c == 0 || i % c != 0) {
				f = false;
			}
			x /= 10;
		}
		if (f == true) {
			cout << i << ' ';
		}
	}
	return 0;
}