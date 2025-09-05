#include <stdio.h>
 
int main() {
 
    int i, n, n_lim;
    
    scanf("%d", &n);
    
    if (n%2 == 0){
        n++;
        n_lim = n + 11;
    }
    else {
        n_lim = n + 11;
    }
    
    for (i = n; i <= n_lim; i += 2){
        printf("%d\n", i);
    }
 
    return 0;
}