#include <stdio.h>
 
int main() {
 
    int i, a, b;
    
    for (i = 0; i < 13 ; i++){
        a = 1 + i*3;
        b = 60 - (i*5);
        printf("I=%d J=%d\n", a, b);
    }
 
    return 0;
}