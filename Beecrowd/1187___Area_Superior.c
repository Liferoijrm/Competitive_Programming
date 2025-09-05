#include <stdio.h>
 
int main() {
 
    char operador;
    int i, j;
    double matriz[12][12], media, soma = 0;
    
    scanf("%c", &operador);
    
    for (i = 0; i < 12; i++){
        for (j = 0; j < 12; j++){
            scanf("%lf", &matriz[i][j]);
        }
    }
    
    if (operador == 'S'){
        for (i = 0; i < 5; i++){
            for (j = (i+1); j < (11-i); j++){
                soma+=matriz[i][j];
            }
        }
        
        printf("%.1lf\n", soma);
    }
    else if (operador == 'M'){
        for (i = 0; i < 5; i++){
            for (j = (i+1); j < (11-i); j++){
                soma+=matriz[i][j];
            }
        }
        
        media = soma/30.0;
        
        printf("%.1lf\n", media);
    }
 
    return 0;
}