#include <stdio.h>

void fibonacci(unsigned long long int fib[]){
    
    int i;
    
    fib[0] = 0;
    fib[1] = 1;
    
    for (i = 2; i < 61; i++){
        fib[i] = fib[i-1] + fib[i-2];
    }
}
 
int main() {
 
    int i, n, x;
    
    unsigned long long int fib[61];
    
    fibonacci(fib);
    
    scanf("%d", &n);
    
    for (i = 0; i < n; i++){
        scanf("%d", &x);
        printf("Fib(%d) = %lld\n", x, fib[x]);
    }
 
    return 0;
}