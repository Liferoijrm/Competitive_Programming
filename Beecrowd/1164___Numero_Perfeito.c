#include <stdio.h>
 
int main() {
 
    int i, lim, n;
    int i2;
    
    scanf("%d\n", &lim);
    
    for (i = 0; i < lim; i++){
        
        int soma = 0;
        
        scanf("%d", &n);
        
        for (i2 = 1; i2 < n; i2++){
            if ((n%i2) == 0){
                soma+=i2;
            }
        }
        
        if (soma == n){
            printf("%d eh perfeito\n", n);
        }
        else{
            printf("%d nao eh perfeito\n", n);
        }
    }
 
    return 0;
}