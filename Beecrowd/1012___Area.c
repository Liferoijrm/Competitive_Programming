#include <stdio.h>
 
int main() {
    const double pi = 3.14159;
    double A, B, C;
    double at, ac, atra, aq, ar;
 
    scanf("%lf %lf %lf", &A, &B , &C);
 
    at = (A*C)/2;
    ac = C*C*pi;
    atra = ((A + B)*C)/2;
    aq = B*B;
    ar = A*B;
 
    printf("TRIANGULO: %.3lf\n", at);
    printf("CIRCULO: %.3lf\n", ac);
    printf("TRAPEZIO: %.3lf\n", atra);
    printf("QUADRADO: %.3lf\n", aq);
    printf("RETANGULO: %.3lf\n", ar);
 
    return 0;
}