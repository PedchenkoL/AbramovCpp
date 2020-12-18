#include <cstdlib>
#include <cmath>
#include <windows.h>
#include <iostream>

using namespace std;
int main() {
	float x, y;
	float Min, Max;
	cin >> x;
	cin >> y;
	cout << endl;
	Max = max(x, y);
	Min = min(x, y);
	Min = (x + y) / 2;
	Max = (x * y) * 2;
	cout << "Max: " << Max << endl << "Min: " << Min << endl;
}
