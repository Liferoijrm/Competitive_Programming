#include <stdio.h>
 
int main() {
 
    char operador;
    int i, j, col;
    float matriz[12][12], media, soma = 0;
    
    scanf("%d", &col);
    
    scanf(" %c", &operador);
    
    for (i = 0; i < 12; i++){
        for (j = 0; j < 12; j++){
            scanf("%f", &matriz[i][j]);
        }
    }
    
    if (operador == 'S'){
        for (i = 0; i < 12; i++){
            soma+=matriz[i][col];
        }
        
        printf("%.1f\n", soma);
    }
    else if (operador == 'M'){
        for (i = 0; i < 12; i++){
            soma+=matriz[i][col];
        }
        
        media = soma/12.0;
        
        printf("%.1f\n", media);
    }
 
    return 0;
}