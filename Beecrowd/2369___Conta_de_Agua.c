#include <stdio.h>
 
int main() {
 
    int consumo, custo;
    
    scanf("%d", &consumo);
    
    if (consumo < 11){
        custo = 7;
        printf("%d\n", custo);
    }
    
    else if (consumo < 31){
        custo = 7 + (consumo - 10);
        printf("%d\n", custo);
    }
    
    else if (consumo < 101){
        custo = 27 + (consumo - 30)*2;
        printf("%d\n", custo);
    }
    
    else {
        custo = 167 + (consumo - 100)*5;
        printf("%d\n", custo);
    }
 
    return 0;
}