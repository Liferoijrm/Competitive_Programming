#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for(int idx = 0; idx < n; idx++){
        printf("Instancia %d\n", idx+1);
        int mat[9][9];
        int is_solution = 1;

        for(int i = 0; i < 9; i++){
            for(int j = 0; j < 9; j++){
                scanf("%d", &mat[i][j]);
            }
        }

        for(int i = 0; i < 9; i++){
            if(!is_solution) break;

            int counter[9] = {0};

            for(int j = 0; j < 9; j++){
                counter[mat[i][j]-1]++;
            }

            for(int j = 0; j < 9; j++){
                if(counter[j] != 1){
                    is_solution = 0;
                    break;
                }
            }
        }

        for(int j = 0; j < 9; j++){
            if(!is_solution) break;

            int counter[9] = {0};

            for(int i = 0; i < 9; i++){
                counter[mat[i][j]-1]++;
            }

            for(int i = 0; i < 9; i++){
                if(counter[i] != 1){
                    is_solution = 0;
                    break;
                }
            }
        }

        for(int i = 0; i < 9; i+=3){
            for(int j = 0; j < 9; j+=3){
                if(!is_solution) break;

                int counter[9] = {0};

                for(int k = i; k < i+3; k++){
                    for(int l = j; l < j+3; l++){
                        counter[mat[k][l]-1]++;
                    }
                }
                for(int k = 0; k < 9; k++){
                    if(counter[k] != 1){
                        is_solution = 0;
                        break;
                    }
                }
            }
        }

        is_solution? printf("SIM\n\n") : printf("NAO\n\n");
    }

    return 0;
}