#include <iostream>
#include <cmath>
#define PI 3.1415926535
using namespace std;
int main() {
	double x, y;
	cin >> x >> y;
	if (y < sin(x) && y < 0.5 && x > 0 && y > 0 && x < PI) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
	return 0;
}