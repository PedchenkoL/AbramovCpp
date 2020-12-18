#include <cstdlib>
#include <cmath>
#include <windows.h>
#include <ctime>
#include <iostream>

using namespace std;
int main() {
	srand((unsigned)time(NULL));
	srand((unsigned)rand());
	
	int n = rand() % 100 + 1;
	cout << "N: " << n << endl << endl;
	if (n == 100) {
		cout << "There are few numbers: " << n << endl;
		cout << "There is numbers sum: " << 1 << endl;
		cout << "There is last number: " << 0 << endl;
		cout << "There is first number: " << 1 << endl;
		cout << "There is penultimate number: " << 0 << endl;
	}
	
	
	
	if (n - (n % 10) == 0) {
		cout << "There is 1 number: " << n << endl;
	}
	else {
		cout << "There are few numbers: " << n << endl;
	}
	int sum1, sum2, sum3;
	sum1 = n % 10;
	sum2 = n - (n % 10);
	sum3 = sum2 / 10;
	int sum = sum1 + sum3;
	cout << "There is numbers sum: " << sum << endl;
	
	int last = n % 10;
	cout << "There is last number: " << last << endl;
	
	int first = (n - (n % 10)) / 10;
	cout << "There is first number: " << first << endl;
	
	if (n >= 10 && n < 100) {
		cout << "There is penultimate number: " << first << endl;
	}
}
