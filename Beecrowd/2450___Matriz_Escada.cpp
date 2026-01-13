#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int mat[n][m];
    int first_non_zero_number[n];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            scanf("%d", &mat[i][j]);
        }
    }
    for(int i = 0; i < n; i++){
        int k = -1;
        for(int j = 0; j < m; j++){
            if(mat[i][j] != 0){
                k = j;
                break;
            }
        }
        first_non_zero_number[i] = (k == -1 ? m : k);

    }

    int is_escadinha = 1;
    for(int i = 0; i < n-1; i++){
        if(first_non_zero_number[i] > first_non_zero_number[i+1]){
            is_escadinha = 0;
            break;
        }
        else if(first_non_zero_number[i] == first_non_zero_number[i+1] && first_non_zero_number[i] != m){
            is_escadinha = 0;
            break;
        }
    }

    is_escadinha? printf("S\n") : printf("N\n");

    return 0;
}