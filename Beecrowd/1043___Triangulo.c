#include <stdio.h>
 
int main() {
 
    double A, B, C, D, E, p, a;
   
    scanf("%lf %lf %lf", &A, &B, &C);
   
    if ((A > B) && (B > C)){
        A = A;
        B = B;
        C = C;
    }
    else if ((A > C) && (C > B)) {
        A = A;
        D = B;
        B = C;
        C = D;
    }
    else if ((B > A) && (A > C)) {
        D = A;
        A = B;
        B = D;
        C = C;
    }
    else if ((C > B) && (B > A)) {
        D = A;
        A = C;
        B = B;
        C = D;
    }
    else if ((C > A) && (A > B)) {
        D = A;
        E = B;
        A = C;
        B = D;
        C = E;
    }
    else if ((B > C) && (C > A)) {
        D = A;
        A = B;
        B = C;
        C = D;
    }
    else if ((B == C) && (C == A)) {
        A = A;
        B = B;
        C = C;
    }
    else if ((B == C) && (A > B)) {
        A = A;
        B = B;
        C = C;
    }
    else if ((A == C) && (B > C)) {
        D = A;
        A = B;
        B = D;
        C = C;
    }
    else if ((B == A) && (C > B)) {
        D = A;
        E = B;
        A = C;
        B = D;
        C = E;
    }
   
    if (A >= (B + C)) {
        a = ((A + B)*C)/2;
        printf("Area = %.1lf\n", a);
    }
    else { 
        p = A + B + C;
        printf("Perimetro = %.1lf\n", p);
    }
 
    return 0;
}