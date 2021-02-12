#include <iostream>
using namespace std;
int main() {
	double x, y;
	cin >> x >> y;
	if ((x * x) + (y * y) > 4 && x < 2 && y < x && x > 0 && y > 0) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
	return 0;
}