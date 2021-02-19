#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int a, b;
	bool f = false;
	cin >> a >> b;
	for (int i = a; i <= b; i++) {
		int x = i;
		int count = 0;
		while (x != 0) {
			count++;
			x /= 10;
		}
		int p = 0;
		x = i;
		while (x != 0) {
			int c = x % 10;
			p += pow(c, count);
			x /= 10;
		}
		if (p == i) {
			f = true;
			cout << i << ' ';
		}
	}
	if (f == false) {
			cout << -1;	
		}
}