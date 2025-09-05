#include <stdio.h>
 
int main() {
    
    int i, j, lin, col, exe = 0;
    
    scanf("%d %d", &lin, &col);
    
    int matriz[lin][col];
    
    for (i = 0; i < lin; i++){
        for (j = 0; j < col; j++){
            scanf("%d", &matriz[i][j]);
        }
    }
    
    for (i = 1; i < (lin-1); i++){
        for (j = 1; j < (col-1); j++){
            if (matriz[i][j] == 42){
                if (matriz[i][j+1] == 7){
                    if (matriz[i+1][j+1] == 7){
                        if (matriz[i+1][j] == 7){
                            if (matriz[i+1][j-1] == 7){
                                if (matriz[i][j-1] == 7){
                                    if (matriz[i-1][j-1] == 7){
                                        if (matriz[i-1][j] == 7){
                                            if (matriz[i-1][j+1] == 7){
                                                i++;
                                                j++;
                                                printf("%d %d\n", i, j);
                                                exe = 1;
                                                break;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    
    if (exe == 0){
        printf("0 0\n");
    }
    
    return 0;
}