#include <cstdlib>
#include <cmath>
#include <windows.h>
#include <iostream>

using namespace std;
int main() {
	float x;
	int a, b, c;
	cin >> x;
	a = trunc(x);
	cout << "X: " << a << endl;
	b = round(x);
	cout << "X: " << b << endl;
	c = trunc(x);
	cout << "X: " << c << endl;
}
