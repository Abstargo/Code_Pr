// tp1.cpp (2023_2024)

#include <iostream>
#include <cmath>

double delta(float a, float b, float c) {
  return b*b -4*a*c;
}

using namespace std;

int main() {
  float a, b, c;
  double d, x1, x2;	// Calcul en double précsion
  do {
    cout << "Entrer a (0 pour quitter): "; 
    cin >> a; 
    if (a == 0) break; 
    cout << "Entrer b et c : "; cin >> b >> c;  
    d = delta(a,b,c);
    cout << "  Delta = " << d << endl;
    if (d < 0) cout << "  Pas de solutions réelles";
    else if (d == 0) cout << "  x1 = x2 = " << -b/(2*a);
    else {
      x1 = (-b-sqrt(d))/(2*a);
      x2 = (-b+sqrt(d))/(2*a);
      cout << "  x1 = " << x1 << "\n  x2 = " << x2;
    } cout << endl;    
  } while(1 > 0);
  cout << "Fin du programme." << endl;
  return 0;
} 