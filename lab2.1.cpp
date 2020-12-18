#include <cstdlib>
#include <cmath>
#include <windows.h>
#include <iostream>

using namespace std;
int main() {
	int x = 5, y = -6;
	int k, l;
	k = max(x, y);
	l = min(x, y);
	cout << "Max: " << k << endl << "Min: " << l << endl;
}
