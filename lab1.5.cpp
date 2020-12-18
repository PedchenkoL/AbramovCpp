#include <cstdlib>
#include <cmath>
#include <windows.h>
#include <iostream>

using namespace std;
int main() {
	int a = -5, b = 7, a1 = 10, b1;
	b1 = (fabs(a1) * fabs(b)) / fabs(a);
	int geometrick = b1;
	cout << "ariphmetick average: " << (a + b) / 2 << endl << "geometrick average: " << geometrick << endl;	
}
