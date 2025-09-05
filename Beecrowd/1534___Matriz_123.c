#include <stdio.h>

int main(){

    int n;

    while (scanf("%d", &n) != EOF){

        int matriz[n][n], i, j;

        for (i = 0; i < n; i++){
            for (j = 0; j < n; j++){
                matriz[i][j] = 3;
            }
        }

        for (i = 0; i < n; i++){
            matriz[i][i] = 1;
            matriz[i][n - i - 1] = 2;
        }

        for (i = 0; i < n; i++){
            for (j = 0; j < n; j++){

                printf("%d", matriz[i][j]);

                if (j != 0 && (j+1)%n == 0){
                    printf("\n");
                }
            }
        }
    }

    return 0;
}