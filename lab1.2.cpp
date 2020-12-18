#include <cstdlib>
#include <cmath>
#include <windows.h>
#include <iostream>

using namespace std;
int main() {
	int x = -5, y = 4;
	cout << (fabs(x) - fabs(y)) / (1 + fabs(x*y)) << endl;
}
