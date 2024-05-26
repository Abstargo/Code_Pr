#include <iostream>
using namespace std;

double harmonique(int N) {
    double result = 0.0;
    for (int i = 1; i <= N; ++i) {
        result += 1.0 / i;  // Utilisez 1.0 pour obtenir une division réelle
    }
    return result;
}

int main() {
    int N;

    cout << "Give me a number: ";
    cin >> N;

    double sdf = harmonique(N);

    cout << "The sum of the first " << N << " terms of the harmonic series is: " << sdf << endl;

    return 0;
}

