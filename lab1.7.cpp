#include <cstdlib>
#include <cmath>
#include <windows.h>
#include <iostream>

using namespace std;
int main() {
	int v1 = 8, v2 = 15, t1 = 20, t2 = 60;
	int v = v1 + v2;
	double t = (v1 * t1 + v2 * t2) / v;
	cout << "Ob'em: " << v << endl << "Temperature: " << t << endl;
}
