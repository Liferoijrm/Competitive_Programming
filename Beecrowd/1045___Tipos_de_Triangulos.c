#include <stdio.h>
 
int main() {
 
    double A, B, C, D, E;
   
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
    
    if (A >= (B + C)){
        printf("NAO FORMA TRIANGULO\n");
    }
    else if ((A*A) == (B*B + C*C)){
        printf("TRIANGULO RETANGULO\n");
       
        if ((A == B) != (B == C) != (C == A)){
            printf("TRIANGULO ISOSCELES\n");
        }
    }
    else if ((A*A) > (B*B + C*C)){
        printf("TRIANGULO OBTUSANGULO\n");
        
        if ((A == B) != (B == C) != (C == A)){
            printf("TRIANGULO ISOSCELES\n");
        }
    }
    else if (((A*A) < (B*B + C*C)) && (A < (B + C))){
        printf("TRIANGULO ACUTANGULO\n");
        
        if ((A == B) && (B == C)){
            printf("TRIANGULO EQUILATERO\n");
        }
        else if ((A == B) != (B == C) != (C == A)){
            printf("TRIANGULO ISOSCELES\n");
        }
    }
    
    return 0;
}