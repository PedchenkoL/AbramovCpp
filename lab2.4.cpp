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
	if (a < b && b < c) {
		cout << "True" << endl;
	}
	else {
		cout << "False" << endl;
	}
}
