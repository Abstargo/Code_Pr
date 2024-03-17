#include <iostream>

using namespace std;

int main() {

	int num1, num2, temp;

	// Input
	cout << "Enter the first integer: ";
	cin >> num1;
	cout << "Enter the second integer: ";
	cin >> num2;

	// Swapping using a third variable
	temp = num1;
	num1 = num2;
	num2 = temp;

	// Output after swapping
	cout << "After swapping: " << endl;
	cout << "First integer: " << num1 << endl;
	cout << "Second integer: " << num2 << endl;

	return (0);	
}
