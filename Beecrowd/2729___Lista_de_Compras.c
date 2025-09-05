#include <stdio.h>
#include <string.h>

typedef struct{
    char nome[21];
    int qtd;
} info;

void bubbleSort(info v[], int n){

    int i, j;

    for(j = 0; j < n; j++){

        for(i = 0; i < n-1; i++){

            if(strcmp(v[i].nome, v[i+1].nome) > 0 && v[i+1].nome[0] != '\0'){
                info aux = v[i];
                v[i] = v[i+1];
                v[i+1] = aux;
            }
        }
    }
}
 
int main() {
    
    int idx, n;
    char temp[20001];
    info produto[1000];

    scanf("%d", &n);
    getchar();

    for (idx = 0; idx < n; idx++){

        int i, j, k, cont = 0;

        for (i = 0; i < 1000; i++){
            for (j = 0; j < 20; j++){
                produto[i].nome[j] = '\0';
            }
            produto[i].qtd = 0;
        }

        i = 0, j = 0, k = 0;

        scanf("%[^\n]", temp);
        getchar();

        while (temp[i] != '\0') {
            if (temp[i] != ' ') {
                produto[j].nome[k] = temp[i];
                k++;
            } 
            else if (temp[i] == ' ') {
                if (produto[j].qtd == 0){
                    produto[j].qtd = 1;
                }  
                j++;
                k = 0;
            }
            i++;
        }

        for (i = 0; i < 1000; i++){
            if (produto[i].qtd == 1){
                cont++;
            }
            else{
                break;
            }
        }

        bubbleSort(produto, (cont + 1));

        printf("%s", produto[0].nome);

        for (j = 1; j < (cont + 1); j++){
            if (strcmp(produto[j].nome, produto[j - 1].nome) != 0){
                printf(" %s", produto[j].nome);
            }
        }
        printf("\n");
    }

    return 0;
}