#include <stdio.h>
 
int main() {
 
    int i, a, b, c, soma = 0;
    
    scanf("%d", &a);
    scanf("%d", &b);
    
    if (a > b){
        c = a;
        a = b;
        b = c;
    }
    
    for (i = a; i <= b; i++){
        if (i%13 != 0){
            soma+=i;
        }
    }
    
    printf("%d\n", soma);
 
    return 0;
}