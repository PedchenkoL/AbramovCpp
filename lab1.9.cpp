#include <cstdlib>
#include <cmath>
#include <windows.h>
#include <iostream>

using namespace std;
int main() {
	int r1 = 5, r2 = 7, r3 = 9;
	double r;
	r = pow(r1, -1) + pow(r2, -1) + pow(r3, -1);
	cout << "Resist is: " << pow(r, -1) << endl;
}
