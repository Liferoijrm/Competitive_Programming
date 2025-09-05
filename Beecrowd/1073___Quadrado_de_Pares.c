#include <stdio.h>
 
int main() {
 
    int i, n, aux;
    
    scanf("%d", &n);
    
    for (i = 2; i <= n; i+=2){
        aux = i*i;
        printf("%d^2 = %d\n", i, aux);
    }
 
    return 0;
}