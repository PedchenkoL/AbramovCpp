#include <cstdlib>
#include <cmath>
#include <windows.h>
#include <iostream>

using namespace std;
int main() {
	int a, b, c;
	cin >> a;
	cin >> b;
	cin >> c;
	if (a >= b && b >= c) {
		a *= 2;
		b *= 2;
		c *= 2;
		cout << endl << "A: " << a << endl << "B: " << b << endl << "C: " << c << endl;
	}
	else {
		a = fabs(a);
		b = fabs(b);
		c = fabs(c);
		cout << endl << "A: " << a << endl << "B: " << b << endl << "C: " << c << endl;
	}
}
