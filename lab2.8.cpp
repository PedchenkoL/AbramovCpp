#include <cstdlib>
#include <cmath>
#include <windows.h>
#include <iostream>

using namespace std;
int main() {
	int a, b;
	cin >> a;
	cin >> b;
	if (a <= b) {
		a = 0;
		cout << "A: " << a << endl << "B: " << b << endl;
	}
	else {
		cout << "A: " << a << endl << "B: " << b << endl;

	}
}
