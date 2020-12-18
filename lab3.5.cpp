#include <cstdlib>
#include <cmath>
#include <windows.h>
#include <iostream>

using namespace std;
int main() {
	int n;
	cin >> n;
	int a = n;
	n = n % 10 +n / 10;
	if (a * a == n * n * n)
		cout << "yes\n";
	else
	    cout << "no\n";
}
