#include <iostream>
using namespace std;

int power(int X, int N)
{

	int result = 1;
	for (int i = 0; i < N; ++i) {
		
		result *= X;
	}
	return result;
}

int main() {

	int X, N;

	cout << "Entrez la valeur de X: ";
	cin >> X;
	cout << "Entrez la valeur de N: ";
	cin >> N;

	int XN = power(X, N);

	cout << X << "^(" << N << ") = " << XN << endl;

	return (0);
}
