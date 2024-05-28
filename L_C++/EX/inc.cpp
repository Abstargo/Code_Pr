#include <iostream>

using namespace std;

int main()
{

	int a = 2, b = 4, c = 8, d = 16, e = 32, f = 64;

	a = 2 * b++;
	c = 10 + --d;
	e = f++ / 2;
	
	cout << a << " " << b << endl;
	a = 2 * b++;
	cout << a << " " << b << endl;

	return (0);
}
