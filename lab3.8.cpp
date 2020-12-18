#include <cstdlib>
#include <cmath>
#include <ctime>
#include <windows.h>
#include <iostream>

using namespace std;
int main() {
	srand((unsigned)time(NULL));
	srand((unsigned)rand());
	
	int n = rand() % 9999 + 1;
//	int n = 2112;
	cout << n << endl;
	double thous, hundr, tens, numbers;
	thous = (n - (n % 1000)) / 1000;
	hundr = (n % 1000 - ((n % 1000) % 100)) / 100;
	tens = (n - (n + (n % 1000) % 100)) / 10;
	numbers = n - ((thous * 1000) + (hundr * 100) + (tens * -10));
	cout << "thousends: " << thous << endl << "hundreds: " << hundr << endl << "tens: " << fabs(tens) << endl << "Numbers: " << numbers << endl;
	
	if (thous == numbers && hundr == fabs(tens)) {
		cout << "That's palindrome number: " << n << endl;
	}
	if (thous != hundr != fabs(tens) != numbers) {
		cout << "All numbrest various in " << n << endl;
	}
}
