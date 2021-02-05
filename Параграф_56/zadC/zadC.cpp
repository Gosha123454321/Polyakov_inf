#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	double x;
	cin >> x;
	cout << fixed << setprecision(3) << (x * x * x * x * x * x * x * x * x * x);
	return 0;
}