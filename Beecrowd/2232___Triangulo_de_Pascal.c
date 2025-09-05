#include <stdio.h>

int sum (int n){
    
    int i, sum_line = 2;
    
    if (n == 1){
        return 1;
    }
    
    for (i = 2; i < n; i++){
        sum_line*=2;
    }
    
    return sum_line + sum(n-1);
}
 
int main() {
 
    int n, i, line;
    
    scanf("%d", &n);
    
    for (i = 0; i < n; i++){
        
        scanf("%d", &line);
        
        printf("%d\n", sum(line));
    }
 
    return 0;
} 