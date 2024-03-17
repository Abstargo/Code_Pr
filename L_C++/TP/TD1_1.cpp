#include <iostream>

using namespace std;

int main() {

	int num1, num2, sum, div, multi, remainder;

	// Input
	cout << "Enter first number: ";
	cin >> num1;
	cout << "Enter second number: ";
	cin >> num2;

	// Calculation
	sum = num1 + num2;
	div = num1 / num2;
	multi = num1 * num2;
	remainder = num1 % num2;

	// Output
	cout << "Addition result: " << sum << endl;
	cout << "Multiplication result: " << multi << endl;
	
	// Division with error handling for division by zero
	if (num2 != 0) {
		cout << "Division result: " << div << endl;
		cout << "Modulus result: " << remainder << endl;
	} else {
		cout << "Error: Divison by zero!" << endl;
	}

	return (0);
}
