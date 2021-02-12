#include <iostream>
using namespace std;
int main() {
	double x, y;
	cin >> x >> y;
	if (y > (x * x) - 2 && (y < x || y < -x)) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
	return 0;
}