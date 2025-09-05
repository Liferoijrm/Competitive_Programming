#include <stdio.h>
 
int main() {
 
    int x, y;
    int num = 1, qtd_l, i, i2;
    
    scanf("%d %d", &x, &y);
    
    if (y%x != 0){
        qtd_l = (y / x) + 1;
    }
    else {
        qtd_l = (y / x);
    }
    
    for (i = 0; i < qtd_l; i++){
        for (i2 = 0; i2 < x; i2++){
            printf("%d", num);
            if (num%x != 0){
                printf(" ");
            }
            else {
                printf("\n");
            }
            num++;
        }
    }
    
    return 0;
}