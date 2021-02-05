#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	int r;
	double pi = 3.141592;
	cin >> r;
	cout << fixed << setprecision(3) << pi * r * r << endl;
	cout << fixed << setprecision(3) << 2 * pi * r;
	return 0;
}