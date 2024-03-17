#include <iostream>

using namespace std;

int main() {

	char input;

	// Input
	cout << "Enter an alphabetic character between 'a' and 'z': ";
	cin >> input;

	// Convert input to lowercase of it's a uppercase
	if (input >= 'A' && input <= 'Z') {
		input = tolower(input);
	}

	// Check if input is within the valid range
	if (input >= 'a' && input <= 'z') {
		char nextLetter = input + 1;

		cout << "Next letter: " << nextLetter << endl;
		cout << "ASCII code: " << static_cast<int>(nextLetter) << endl;
	} else {
		cout << "Invalid input! " << endl;
	}

	return (0);
}
