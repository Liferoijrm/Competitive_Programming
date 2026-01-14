#include <stdio.h>
#include <math.h>

int main() {

    int n;

    while (scanf("%d", &n) == 1) {
        int mat[n][n];
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                mat[i][j] = 0;
            }
        }

        int border = n/3;

        for(int i = border; i < n-border; i++){
            for(int j = border; j < n-border; j++){
                mat[i][j] = 1;
            }
        }

        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(i == j && mat[i][j] == 0) mat[i][j] = 2;
            }
        }

        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(i+j == n-1 && mat[i][j] == 0) mat[i][j] = 3;
            }
        }

        mat[n/2][n/2] = 4;

        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                printf("%d", mat[i][j]);
            }
            printf("\n");
        }
        
        printf("\n");
    }

    return 0;
}
