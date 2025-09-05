#include <stdio.h>
#include <string.h>

typedef struct{
    char palavra[71];
    int size;
}info;

int main() {

    int num_palavras;
    int linhas, letras;
    int i, j;
    
    while (scanf("%d", &num_palavras) != EOF){

        info lista[num_palavras];

        for (i = 0; i < num_palavras; i++){
            for (j = 0; j < 71; j++){
                lista[i].palavra[j] = '\0';
            }
            lista[i].size = 0;
        }

        int cont = 0, cont_linhas = 1;

        scanf("%d %d", &linhas, &letras);
        getchar();

        for (i = 0; i < num_palavras; i++){
            scanf("%s", lista[i].palavra);
            lista[i].size = strlen(lista[i].palavra);
        }
        getchar();

        for (i = 0; i < num_palavras; i++){

            if ((cont+lista[i].size) <= letras){
                cont+=lista[i].size;
                if (i != (num_palavras-1) && cont != letras){
                    cont++; // vai ter um espaço depois de cada palavra menos da ultima
                }
            }
            else {
                cont = 0;
                cont_linhas++;
                cont+=lista[i].size;
                if (i != (num_palavras-1) && cont != letras){
                    cont++; // vai ter um espaço depois de cada palavra menos da ultima
                }
            }
        }

        if (cont_linhas%linhas == 0){
            int result = cont_linhas/linhas;
            printf("%d\n", result);
        }
        else {
            int result = (cont_linhas/linhas) + 1;
            printf("%d\n", result);
        }
    }

    return 0;
}