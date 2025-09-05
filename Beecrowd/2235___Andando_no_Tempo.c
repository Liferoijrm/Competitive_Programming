#include <stdio.h>
 
int main() {
 
    int A, B, C, D, E;
    
    scanf("%d %d %d", &A, &B, &C);
    
    /* se usar os tres creditos, a soma dos 2 menores deve ser igual a maior. se forem usados 2 creditos, devem haver 2 creditos iguais*/
    
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
    
    if (A == (B + C)){
        printf("S\n");
    }
    else if ((A == B) || (B == C) || (C == A)){
        printf("S\n");
    }
    else {
        printf("N\n");
    }
    
    return 0;
}