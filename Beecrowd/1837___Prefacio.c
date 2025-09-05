#include <stdio.h>
 
int main() {
 
    int a, b, q, r;
    
    scanf("%d %d", &a, &b);
    
    if ((a >= 0) && (b > 0)){
        q = a / b;
        r = a - (b*q);
        printf("%d %d\n", q, r);
    }
    
    if ((a >= 0) && (b < 0)){
        q = a / b;
        r = a - (b*q);
        printf("%d %d\n", q, r);
    }
    
    if ((a < 0) && (b > 0)){
        q = (a / b);
    
        if (a%b != 0){
            q = q - 1;
        }
    
        r = a - (b*q);
        printf("%d %d\n", q, r);
    }
    
    if ((a < 0) && (b < 0)){
        q = (a / b);
    
        if (a%b != 0){
            q = q + 1;
        }
    
        r = a - (b*q);
        printf("%d %d\n", q, r);
    }
 
    return 0;
}