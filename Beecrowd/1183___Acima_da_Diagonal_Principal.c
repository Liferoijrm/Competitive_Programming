#include <stdio.h>

int main() {
 
    char operador;
    int i, j;
    float matriz[12][12], media, soma = 0;
    
    scanf("%c", &operador);
    
    for (i = 0; i < 12; i++){
        for (j = 0; j < 12; j++){
            scanf("%f", &matriz[i][j]);
        }
    }
    
    if (operador == 'S'){
        for (j = 11; j > 0; j--){
            for (i = 0; i < j; i++){
                soma+=matriz[i][j];
            }
        }
        
        printf("%.1f\n", soma);
    }
    
    else if (operador == 'M'){
        for (j = 11; j > 0; j--){
            for (i = 0; i < j; i++){
                soma+=matriz[i][j];
            }
        }
        
        media = soma/66.0;
        
        printf("%.1f\n", media);
    }
 
    return 0;
}