#include <stdio.h>
 
int main() {
 
    int i, a, b, c, n;
   
    scanf("%d", &n);
   
    for (i = 0; i < n; i++){
        a = 1 + i*4;
        b = 2 + i*4;
        c = 3 + i*4;
       
        printf("%d %d %d PUM\n", a, b, c);
    }
 
    return 0;
}