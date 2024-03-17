#include <iostream>

using namespace std;

int main() {

	int number;

	// Input a 4-digit number
	cout << "Enter a 4-digit number: ";
	cin >> number;

	// Extract each digit and display the base 10 decompositon
	cout << "Base 10 decoposition of " << number << " is: ";
	cout << number % 10 << "+" << (number / 10) % 10 << " * 10 + ";
	cout << (number / 100) % 10 << " * 10² + " << (number / 1000) % 10 << " * 10³" << endl;

	return (0);
}
