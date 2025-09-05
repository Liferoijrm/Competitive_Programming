#include <stdio.h>
#include <string.h>

typedef struct{
    char nome[1000];
} info;
 
int main() {

    info lista[2000];
    int idx = 0, i, j;
 
    while (scanf("%[^\n]", lista[idx].nome) != EOF){
        getchar();
        idx++;
    }

    for (i = 0; i < idx; i++){
        for (j = 0; j < strlen(lista[i].nome); j++){
            if (lista[i].nome[j] >= 'A' && lista[i].nome[j] <= 'Z'){
                lista[i+1000].nome[j] = lista[i].nome[j] + 32;
            }
            else {
                lista[i+1000].nome[j] = lista[i].nome[j];
            }
        }
    }

    char nome_final[1000];
    int pos = 0;
    
    strcpy(nome_final, lista[1000].nome);
    
    for (i = 0; i < (idx-1); i++){
        if (strcmp(nome_final, lista[i+1+1000].nome) < 0){
            pos = i+1;
            strcpy(nome_final, lista[i+1+1000].nome);
        }
    }

    printf("%s\n", lista[pos].nome);
 
    return 0;
}