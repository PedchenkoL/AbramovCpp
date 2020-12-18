#include <cstdlib>
#include <cmath>
#include <windows.h>
#include <iostream>

using namespace std;
int main() {
	float x;
	int a, b, c;
	cin >> x;
	a = trunc(x);
	cout << "X: " << a << endl;
	b = round(x);
	cout << "X: " << b << endl;
	c = trunc(x);
	cout << "X: " << c << endl;
	int arr[] = {a, b, c};
	cout << endl;
	for(int i; i < 3; i++) {
		if (arr[i] % 2 == 0) {
			cout << "Chetnoe" << endl;
		}
		else {
			cout << "Ne Chetnoe" << endl;
		}
	}
}
