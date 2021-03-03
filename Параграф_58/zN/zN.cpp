#include <iostream>
using namespace std;
int main() {
	int n, a;
	cin >> n;
	bool isTrue = true;
	int last = n % 10;
	while (n != 0) {
		a = n % 10;
		if (last != a) {
			isTrue = false;
		}
		n /= 10;
	}
	if (isTrue == true) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
	return 0;
}