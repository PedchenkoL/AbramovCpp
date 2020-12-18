#include <cstdlib>
#include <cmath>
#include <windows.h>
#include <iostream>

using namespace std;
int main() {
	int a, b, c;
	cin >> a;
	cin >> b;
	cin >> c;
	int arr[] = {a, b, c};
	cout  << endl;
	for (int i = 0; i < 3; i++) {
		if (arr[i] > 1 && arr[i] < 3) {
			cout << arr[i] << endl; 
		}
	}
}
