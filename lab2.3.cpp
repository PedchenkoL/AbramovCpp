#include <cstdlib>
#include <cmath>
#include <windows.h>
#include <iostream>

using namespace std;
int main() {
	int x = 5, y = -6, m = 25, s1, s2, s3;
	s1 = x + y + m;
	s2 = x * y * m;
	s3 = (x + y + m) / 2;
	int k = max(s1, s2);
	int l = min(s3, s2);
	cout << "Max: " << k << endl << "Min: " << pow(l, 2) + 1 << endl;
}
