#include <cstdlib>
#include <cmath>
#include <windows.h>
#include <iostream>

using namespace std;
int main() {
	int k, m;
	cin >> k;
	cin >> m;
	float x, x1, y, y1, z, z1;
	x = -2;
	y = -4;
	z = -6;
	cout << endl;
	if (k < pow(m, 2)) {
		x1 = fabs(x);
		y1 = y - 0.5;
		z1 = z - 0.5;
		cout << "X: " << x1 << endl << "Y: " << y << endl << "Z: " << z1 << endl;

	}
	else if (k == pow(m, 2)) {
		x1 = x - 0.5;
		y1 = fabs(y);
		z1 = z - 0.5;
		cout << "X: " << x1 << endl << "Y: " << y << endl << "Z: " << z1 << endl;
	}
	else if (k > pow(m, 2)) {
		x1 = x - 0.5;
		y1 = y - 0.5;
		z1 = fabs(z);
		cout << "X: " << x1 << endl << "Y: " << y << endl << "Z: " << z1 << endl;

	}
}
