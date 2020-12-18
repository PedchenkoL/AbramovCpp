#include <cstdlib>
#include <cmath>
#include <windows.h>
#include <iostream>

using namespace std;
int main() {
	int x = 5, y = -6, m = 25;
	int k = max(m, max(x, y));
	int l = min(m, min(x, y));
	cout << "Max: " << k << endl << "Min: " << l << endl;

}
