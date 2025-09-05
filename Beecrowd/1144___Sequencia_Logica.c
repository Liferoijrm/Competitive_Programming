#include <stdio.h>
 
int main() {
 
    int i, a, b, c, d, e, n;
   
    scanf("%d", &n);
   
    for (i = 1; i <= n; i++){
        a = i;
        b = i*i;
        c = i*i*i;
        d = b + 1;
        e = c + 1;
       
        printf("%d %d %d\n", a, b, c);
        printf("%d %d %d\n", a, d, e);
    }
 
    return 0;
}