#include <cstdlib>
#include <cmath>
#include <windows.h>
#include <iostream>

using namespace std;
int main() {
	int h = 100;
	int t2;
	double g = 9.81;
	t2 = (2 * h) / g;
	cout << "Time is: " << sqrt(t2) << endl;
}
