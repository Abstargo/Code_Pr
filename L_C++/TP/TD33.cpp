#include <iostream>
using namespace std;

int factorial(int N)
{

	int result = 1;
	for (int i = 1; i <= N; ++i)
	{
		result = result * i;
	}
	return result;
}

int main() {

	int N; 

	cout << "Give me the number";
	cin >> N;

	int sm = factorial(N);

	cout << N << "! = " << sm << endl;

	return (0);
}
