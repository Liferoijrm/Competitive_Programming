#include <stdio.h>

long long int fat(int n){
    if (n == 0){
        return 1;
    }
    else if (n == 1){
        return 1;
    }
    else{
        return n*fat(n-1);
    }
}
 
int main() {
    
    int a, b;
 
    while (scanf("%d %d", &a, &b) != EOF){  
        long long int soma = fat(a) + fat(b);  
        printf("%lld\n", soma);
    }
}