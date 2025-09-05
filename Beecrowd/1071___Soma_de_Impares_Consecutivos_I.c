#include <stdio.h>
 
int main() {
 
    long long int a, b, temp, i, soma;
    
    scanf("%lld", &a);
    scanf("%lld", &b);
    
    if (a > b){
        temp = a;
        a = b;
        b = temp;
    }
    if (a%2 == 0){
        a++;
    }
    else{
        a+=2;
    }
    
    for (i = a; i < b; i+=2){
        soma+=i;
    }
    
    printf("%lld\n", soma);
 
    return 0;
}