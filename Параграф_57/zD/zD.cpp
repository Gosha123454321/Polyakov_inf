﻿#include <iostream>
using namespace std;
int main() {
	int a;
	cin >> a;
	if (a < 1000 && a >= 100) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
	return 0;
}