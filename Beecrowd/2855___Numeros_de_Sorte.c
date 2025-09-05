#include <stdio.h>
 
int main() {

    int n; 
 
    while (scanf("%d", &n) != EOF){

        int array[n], cut[n], num, pos_atual, azarado = 0;
        int i, idx = 2;
        int inicio = 0, meio, fim = n - 1, achou_pos = 0;

        for (i = 0; i < n; i++){
            scanf("%d", &array[i]);
            cut[i] = 0;
        }

        scanf("%d", &num);

        while ((inicio <= fim) && (!achou_pos)) {
            
            meio = (inicio + fim) / 2;
            
            if (num < array[meio]){
                fim = meio - 1;
            }
            else if (num > array[meio]){
                inicio = meio + 1;
            }
            else{
                achou_pos = 1;
                pos_atual = meio;
            }
        }

        while ((pos_atual + 1) >= idx && azarado == 0){
            
            int eliminados = 0;

            for (i = 0; i < n; i++){
                
                if ((i + 1)%idx == 0){
                    cut[i] = 1;
                    eliminados++;
                }
                if (array[i] == num){
                    if (cut[i] == 1){
                        azarado = 1;
                    }
                    break;
                }
            }

            pos_atual = pos_atual - eliminados;
            array[pos_atual] = num;
            idx++;
            
            for (i = 0; i < n; i++){
                cut[i] = 0;
                
                if (array[i] == num){
                    break;
                }
            }
        }

        if (!azarado){
            printf("Y\n");
        }
        else {
            printf("N\n");
        }
    }

    return 0;
}