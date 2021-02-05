#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
	double a, b;
	cin >> a >> b;
	cout << a + (b - a) * rand() / RAND_MAX << ' ' << a + (b - a) * rand() / RAND_MAX << ' ' << a + (b - a) * rand() / RAND_MAX << ' ' << a + (b - a) * rand() / RAND_MAX << ' ' << a + (b - a) * rand() / RAND_MAX;
	return 0;
}