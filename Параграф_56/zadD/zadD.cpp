#include <iostream>
using namespace std;
int main() {
	int a, b, c, d;
	cin >> d;
	c = d % 10;
	d /= 10;
	b = d % 10;
	a = d / 10;
	cout << a << ' ' << b << ' ' << c;
	return 0;
}