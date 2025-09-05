#include <stdio.h>
#include <string.h>

typedef struct{
    char nome[51];
    char presenca[101];
    int invalid;
}info;

int main(){

    int n, idx;

    scanf("%d", &n);
    getchar();

    for(idx = 0; idx < n; idx++){

        int nomes, i, j;
        info lista[100];

        scanf("%d", &nomes);
        getchar();

        for (i = 0; i < 100; i++){
            for (j = 0; j < 51; j++){
                lista[i].nome[j] = '\0';
            }
            for (j = 0; j < 101; j++){
                lista[i].presenca[j] = '\0';
            }
            lista[i].invalid = 0;
        }

        for (i = 0; i < nomes; i++){
            scanf("%s", lista[i].nome);
        }
        getchar();

        for (i = 0; i < nomes; i++){
            scanf("%s", lista[i].presenca);
        }
        getchar();

        for (i = 0; i < nomes; i++){

            float dias = 0, presente = 0;

            for (j = 0; j < strlen(lista[i].presenca); j++){
                if (lista[i].presenca[j] == 'P'){
                    dias++;
                    presente++;
                }
                else if (lista[i].presenca[j] == 'A'){
                    dias++;
                }
            }

            if ((presente/dias) < 0.75){
                lista[i].invalid = 1;
            }
        }

        int first = 0;

        for (i = 0; i < nomes; i++){
            if (lista[i].invalid == 1 && first == 0){
                printf("%s", lista[i].nome);
                first = 1;
            }
            else if (lista[i].invalid == 1){
                printf(" %s", lista[i].nome);
            }
        }

        printf("\n");
    }

    return 0;
}