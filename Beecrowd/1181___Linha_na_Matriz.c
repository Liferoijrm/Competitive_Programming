#include <stdio.h>
 
int main() {
 
    char operador;
    int i, j, lin;
    float matriz[12][12], media, soma = 0;
    
    scanf("%d", &lin);
    
    scanf(" %c", &operador);
    
    for (i = 0; i < 12; i++){
        for (j = 0; j < 12; j++){
            scanf("%f", &matriz[i][j]);
        }
    }
    
    if (operador == 'S'){
        for (j = 0; j < 12; j++){
            soma+=matriz[lin][j];
        }
        
        printf("%.1f\n", soma);
    }
    else if (operador == 'M'){
        for (j = 0; j < 12; j++){
            soma+=matriz[lin][j];
        }
        
        media = soma/12.0;
        
        printf("%.1f\n", media);
    }
 
    return 0;
}