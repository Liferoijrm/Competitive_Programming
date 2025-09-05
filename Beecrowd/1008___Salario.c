#include <stdio.h>
 
int main() {
    
    int a;
    float b, c, soma;
    
    scanf("%d", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    
    soma = c * b;
    
    printf("NUMBER = %d\n", a);
    printf("SALARY = U$ %.2f\n", soma);
 
    return 0;
}