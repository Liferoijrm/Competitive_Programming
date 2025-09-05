#include <stdio.h>
 
int main() {
 
    float n, novo, aumento;
 
    scanf("%f", &n);
    
    if (n <= 400){
        novo = n*1.15;
        aumento = novo - n;
        printf("Novo salario: %.2f\n", novo);
        printf("Reajuste ganho: %.2f\n", aumento);
        printf("Em percentual: 15 %\n");
    }
    else if (n <= 800){
        novo = n*1.12;
        aumento = novo - n;
        printf("Novo salario: %.2f\n", novo);
        printf("Reajuste ganho: %.2f\n", aumento);
        printf("Em percentual: 12 %\n");
    }
    else if (n <= 1200){
        novo = n*1.10;
        aumento = novo - n;
        printf("Novo salario: %.2f\n", novo);
        printf("Reajuste ganho: %.2f\n", aumento);
        printf("Em percentual: 10 %\n");
    }
    else if (n <= 2000){
        novo = n*1.07;
        aumento = novo - n;
        printf("Novo salario: %.2f\n", novo);
        printf("Reajuste ganho: %.2f\n", aumento);
        printf("Em percentual: 7 %\n");
    }
    else {
        novo = n*1.04;
        aumento = novo - n;
        printf("Novo salario: %.2f\n", novo);
        printf("Reajuste ganho: %.2f\n", aumento);
        printf("Em percentual: 4 %\n");
    }
 
 
    return 0;
}