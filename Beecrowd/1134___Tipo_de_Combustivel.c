#include <stdio.h>
 
int main() {
 
    int n, alc = 0, gas = 0, die = 0;
    
    do {
        scanf("%d\n", &n);
        
        if (n == 1){
           alc++;
        }
        else if (n == 2){
           gas++;
        }
        else if (n == 3){
           die++;
        }
    }
    
    while (n != 4);
    
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", alc);
    printf("Gasolina: %d\n", gas);
    printf("Diesel: %d\n", die);
    
    return 0;
}