#include <stdio.h>
 
int main() {
 
    int A, B, C, r;
   
    scanf("%d %d", &A, &B);
   
    if (A > B){
        A = A;
        B = B;
    }
    else {
        C = A;
        A = B;
        B = C;
    }
   
    r = A%B;
   
    if (r == 0){
        printf("Sao Multiplos\n");
    } 
    else {
        printf("Nao sao Multiplos\n");
    }
 
    return 0;
}