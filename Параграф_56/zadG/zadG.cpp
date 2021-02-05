#include <iostream>
using namespace std;
int main() {
	int a, b;
	cin >> a >> b;
	cout << fixed << rand() % (b - a + 1) + a << ' ' << rand() % (b - a + 1) + a << ' ' << rand() % (b - a + 1) + a << ' ' << rand() % (b - a + 1) + a << ' ' << rand() % (b - a + 1) + a;
	return 0;
}