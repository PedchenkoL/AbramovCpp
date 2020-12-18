#include <cstdlib>
#include <cmath>
#include <windows.h>
#include <iostream>

using namespace std;
int main() {
	int x, y, z;
	cin >> x;
	cin >> y;
	if (x > y) {
		z = x - y;
		cout << z << endl;
	}
	else {
		z = y - x + 1;
		cout << z << endl;
	}
}
