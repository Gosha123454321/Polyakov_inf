#include <iostream>
using namespace std;
int main() {
	double x, y;
	cin >> x >> y;
	if (y > 2 * (x * x) && y > 1 - x && x < 1 || x > 0 && x < 1 && y > 1 - x) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
	return 0;
}