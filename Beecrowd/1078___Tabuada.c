#include <stdio.h>
 
int main() {
 
 int i, n, aux;
    
    scanf("%d", &n);
    
    for (i = 1; i < 11; i++){
        aux = n*i;
        printf("%d x %d = %d\n", i, n, aux);
    }
 
    return 0;
}