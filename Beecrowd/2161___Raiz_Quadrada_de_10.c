#include <stdio.h>

double rdx (float n){
    
    if (n == 0){
        return 0;
    }
    
    else if (n == 1){
        return 1/6.0;
    }
    
    return  1/(6.0 + rdx(n-1));
}

int main() {
 
    double n, ans;
    
    scanf("%lf", &n);
    
    ans = rdx(n) + 3;

    printf("%.10lf\n", ans);
 
    return 0;
}