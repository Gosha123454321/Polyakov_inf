#include <iostream>
using namespace std;
int main() {
	double x, y;
	cin >> x >> y;
	if (y < 2 - x * x && (y > x || y > 0)) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
	return 0;
}