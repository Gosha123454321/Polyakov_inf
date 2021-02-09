#include <iostream>
using namespace std;
int main() {
	int a;
	cin >> a;
	if (a >= 1 && a <= 2) {
		cout << "winter";
	}
	if (a == 12) {
		cout << "winter";
	}
	if (a >= 3 && a <= 5) {
		cout << "spring";
	}
	if (a >= 6 && a <= 8) {
		cout << "summer";
	}
	if (a >= 9 && a <= 11) {
		cout << "autumn";
	}
	if (a > 12 || a <= 0) {
		cout << "NO";
	}
	return 0;
}