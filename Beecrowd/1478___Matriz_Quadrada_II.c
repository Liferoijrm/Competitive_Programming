#include <stdio.h>
#include <math.h>

int main(){

    int n;
    
    scanf("%d", &n);

    while (n != 0){

        int matriz[n][n], i, j;

        for (i = 0; i < n; i++){
            for (j = 0; j < n; j++){
                matriz[i][j] = fabs(i - j) + 1;
            }
        }

        for (i = 0; i < n; i++){
            for (j = 0; j < n; j++){

                printf("%3d", matriz[i][j]);
                
                if ((j+1)%n != 0){
                    printf(" ");
                }
                
                else if (n == 1 && (j+1)%n == 0){
                    printf("\n");
                }
                
                else if (j != 0 && (j+1)%n == 0){
                    printf("\n");
                }
                
                if ((i + 1) == n && (j + 1) == n){
                    printf("\n");
                }
            }
        }
        
        scanf("%d", &n);
    }

    return 0;
}