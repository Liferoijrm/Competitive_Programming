#include <stdio.h>
 
int main() {
 
    int i, n;
   
    int v[1000];
   
    scanf("%d", &n);
    
    for (i = 0; i < 1000; i++){
        
        if (i%n == 0){
            v[i] = 0;
        }
        else{
            v[i] = v[i-1] + 1;
        }
    }
    
    for (i = 0; i < 1000; i++){
        printf("N[%d] = %d\n", i, v[i]);
    }
 
    return 0;
}