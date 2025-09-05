#include <stdio.h>

void primo (int y){
    
    int z, a, i2, check = 0;
    
    a = y - 1;
    
    for (i2 = 2; i2 < y; i2++){
        
        if (y%a != 0){
            a--;
        }
        else{
            printf("%d nao eh primo\n", y);
            check = 1;
            break;
        }
    }
    
    if (check == 0){
        printf("%d eh primo\n", y);
    }
}
 
int main() {
 
    int i, n, x;
    
    scanf("%d", &n);
    
    for (i = 0; i < n; i++){
        scanf("%d", &x);
        primo(x);
    }
 
    return 0;
}