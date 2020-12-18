#include <cstdlib>
#include <cmath>
#include <windows.h>
#include <iostream>
#include <ctime>

using namespace std;
int main() {
	srand((unsigned)time(NULL));
	srand((unsigned)rand());
	
	int x = rand() % 1000 + 100;
	int hundreds = (x - (x % 100)) / 100;
	cout << "X: " << x << endl << "Hundreds: " << hundreds << endl;
}
