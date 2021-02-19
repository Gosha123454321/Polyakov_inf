#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	bool isTrue = false;
	while (n != 0) {
		if (n % 10 == n % 100 / 10) {
			cout << "YES";
			isTrue = true;
			return 0;
		}
		n /= 10;
	}
	if (isTrue == false) {
		cout << "NO";
	}
	return 0;
}