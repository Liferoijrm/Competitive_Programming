#include <stdio.h>
 
int main() {
 
    float n, novo;
 
    scanf("%f", &n);
    
    if (n <= 2000){
        printf("Isento\n");
    }
    else if (n <= 3000){
        n = n - 2000; 
        novo = n*0.08;
        printf("R$ %.2f\n", novo);
    }
    else if (n <= 4500){
        n = n - 3000; 
        novo = n*0.18 + 80;
        printf("R$ %.2f\n", novo);
    }
    else{
        n = n - 4500; 
        novo = n*0.28 + 350;
        printf("R$ %.2f\n", novo);
    }
 
    return 0;
}