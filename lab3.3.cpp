#include <cstdlib>
#include <cmath>
#include <windows.h>
#include <iostream>

using namespace std;
int main() {
	float a, b;
	cin >> a;
	cin >> b;
	int r = 9, s = -7;
	cout << endl;
	float ab = a / b;
	if (ab == s || ab == r) {
		cout << "True" << endl;
	}
	else {
		cout << "False" << endl;
	}
}
