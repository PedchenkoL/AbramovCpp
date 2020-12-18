#include <cstdlib>
#include <cmath>
#include <windows.h>
#include <iostream>

using namespace std;
int main() {
	int katet1 = 5, katet2 = 12;
	int s = 0.5 * katet1 * katet2;
	int gipotenuza = sqrt(pow(katet1, 2) + pow(katet2, 2));
	cout << "ploschad': " << s << endl << "gipotenuza: " << gipotenuza << endl;
}
