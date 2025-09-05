#include <stdio.h>

int fib (int n, int seq[]){
    if (n == 0){
        return 0;
    }
    else if (n == 1){
        return 1;
    }
    else{
        return seq[n-1] + seq[n-2];
    }
}

int main() {
 
    int n, i, seq[45];
    
    scanf("%d", &n);
    
    for(i = 0; i < n; i++){
        seq[i] = fib(i, seq);
        
        printf("%d", seq[i]);
        
        if (i != (n-1)){
            printf(" ");
        }
        else{
            printf("\n");
        }
    }
 
    return 0;
}