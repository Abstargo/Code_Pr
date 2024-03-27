#include <iostream>

using namespace std;

// Funtion to add 2 durations
void addDuration(int h1, int m1, int s1, int h2, int m2, int s2, int &hSum, int &mSum, int &sSum) {

	int totalSeconds1 = h1 * 3600 + m1 * 60 + s1;
	int totalSeconds2 = h2 * 3600 + m2 * 60 + s2;
	int totalSecondsSum = totalSeconds1 + totalSeconds2;

	hSum = totalSecondsSum / 3600;
	mSum = (totalSecondsSum % 3600) / 60;
	sSum = totalSecondsSum % 60;
}

int main() {

	int h1, m1, s1, h2, m2, hSum, mSum, sSum;

	// Input first duration
	cout << "Enter the first duration (h:mn:s): ";
    scanf("%d:%d:%d", &h1, &m1, &s1);

    // Input second duration
    cout << "Enter the second duration (h:mn:s): ";
    scanf("%d:%d:%d", &h2, &m2, &s2);

    // Calculate total duration
    addDuration(h1, m1, s1, h2, m2, s2, hSum, mSum, sSum);

    // Output total duration
    cout << "Total duration: " << hSum << "h " << mSum << "mn " << sSum << "s" << endl;

    return 0;
}
