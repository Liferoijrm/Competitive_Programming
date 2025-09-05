#include <stdio.h>
 
int main() {
 
    int i, n, aux;
    
    scanf("%d", &n);
    
    for (i = 0; i < 10000; i++){
        
        aux = (n*i) + 2;
        
        if (aux > 10000){
            break;
        }
        else {
            printf("%d\n", aux);
        }
    }
 
    return 0;
}