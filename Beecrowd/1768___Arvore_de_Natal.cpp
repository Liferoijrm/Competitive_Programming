#include <stdio.h>

int main() {

    int n;

    while (scanf("%d", &n) != EOF) {
        int mat[(n/2)+1][n];

        for (int i = 0; i < (n/2)+1; i++) {
            for (int j = 0; j < n; j++) {
                mat[i][j] = 0;
            }
        }

        for(int i = 0; i < (n/2)+1; i++){
            for(int j = i; j < n-i; j++){
                mat[i][j] = 1;
            }
        }

        for(int i = n/2; i >= 0; i--){
            int asterisco = 0;
            for(int j = 0; j < n; j++){
                if(mat[i][j] == 0 && !asterisco) printf(" ");
                else if(mat[i][j] == 1){
                    printf("*");
                    asterisco = 1;
                }
            }
            printf("\n");
        }

        for(int i = n/2; i >= (n/2)-1; i--){
            int asterisco = 0;
            for(int j = 0; j < n; j++){
                if(mat[i][j] == 0 && !asterisco) printf(" ");
                else if(mat[i][j] == 1){
                    printf("*");
                    asterisco = 1;
                }
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}
