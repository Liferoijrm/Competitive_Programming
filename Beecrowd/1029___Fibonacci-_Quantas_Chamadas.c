#include <stdio.h>

int calls = 0;

long long int fib(int n){
    
    if (n == 0){
        calls++;
        return 0;
    }
    else if (n == 1){
        calls++;
        return 1;
    }
    else{
        calls++;
        return fib(n-1) + fib(n-2);
    }
}
 
int main() {
    
    int n, idx, a;
    
    scanf("%d", &n);
 
    for (idx = 0; idx < n; idx++){
        
        scanf("%d", &a);
        
        long long int result = fib(a);
        
        calls--;
        
        printf("fib(%d) = %d calls = %lld\n", a, calls, result);
        
        calls = 0;
    }
}