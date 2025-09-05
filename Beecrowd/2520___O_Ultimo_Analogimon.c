#include <stdio.h>
#include <math.h>

int main(){

    int lin, col;

    while (scanf("%d %d", &lin, &col) != EOF){

        int matriz[lin][col], i, j;
        int lin_mon, col_mon, lin_jog, col_jog, tempo;

        for (i = 0; i < lin; i++){
            for (j = 0; j < col; j++){
                scanf("%d", &matriz[i][j]);
            }
        }
        
        for (i = 0; i < lin; i++){
            for (j = 0; j < col; j++){
                if (matriz[i][j] == 2){
                    lin_mon = i;
                    col_mon = j;
                    break;
                }
            }
        }
        
        for (i = 0; i < lin; i++){
            for (j = 0; j < col; j++){
                if (matriz[i][j] == 1){
                    lin_jog = i;
                    col_jog = j;
                    break;
                }
            }
        }
        
        tempo = fabs(lin_mon - lin_jog) + fabs(col_mon - col_jog);
        
        printf("%d\n", tempo);
    }
    
    return 0;
}