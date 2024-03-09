// tp1.c (2023_2024)

#include <stdio.h>
#include <math.h>

double delta(float a, float b, float c) {
  return b*b -4*a*c;
}

int main() {
  float a, b, c;
  double d, x1, x2;	// Calcul en double précsion
  do {
    printf("Entrer a (0 pour quitter): "); 
    scanf("%f",&a); 
    if (a == 0) break; 
    printf("Entrer b et c : "); scanf("%f %f", &b, &c); 
    d = delta(a,b,c);
    printf("  Delta = %f\n", d);
    if (d < 0) printf("  Pas de solutions réelles");
    else if (d == 0) printf("  x1 = x2 = %f", -b/(2*a));
    else {
      x1 = (-b-sqrt(d))/(2*a);
      x2 = (-b+sqrt(d))/(2*a);
      printf("  x1 = %f\n  x2 = %f", x1, x2);
    } printf("\n");    
  } while(1 > 0);
  printf("Fin du programme.\n");
  return 0;
} 