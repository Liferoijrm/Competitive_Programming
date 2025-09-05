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
        for (i = 0; i < 11; i++){
            for (j = 0; j < (11-i); j++){
                soma+=matriz[i][j];
            }
        }
        
        printf("%.1f\n", soma);
    }
    else if (operador == 'M'){
        for (i = 0; i < 11; i++){
            for (j = 0; j < (11-i); j++){
                soma+=matriz[i][j];
            }
        }
        
        media = soma/66.0;
        
        printf("%.1f\n", media);
    }
 
    return 0;
}