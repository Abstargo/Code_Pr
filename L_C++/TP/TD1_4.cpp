#include <iostream>

using namespace std;

int main() {

	int sum = 0;
	int num;

	// Input 5 integers and calculate their sum
	cout << "Enter 5 integers: ";
	for (int i = 0; i < 5; i++) {
		cin >> num;
		sum += num;
	}

	// Calculate and display the average
	double average = static_cast<double>(sum) / 5;
	cout << "Average of the entered integers: " << average << endl;

	return (0);
}
