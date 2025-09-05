#include <stdio.h>
 
int main() {
 
    int T1, T2, T3, T4, T;
    
    scanf("%d %d %d %d", &T1, &T2, &T3, &T4);
    T = T1 + T2 + T3 + T4 - 3;
    
    printf("%d\n", T);
    
    return 0;
}