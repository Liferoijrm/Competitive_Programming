#include <stdio.h>
#include <string.h>

typedef struct{
    char nome[101];
    char cor;
    char size;
} info;

void bubbleSort1(info v[], int n){

    int i, j;

    for(j = 0; j < n; j++){

        for(i = 0; i < n-1; i++){

            if(v[i].cor > v[i+1].cor){
                info aux = v[i];
                v[i] = v[i+1];
                v[i+1] = aux;
            }
        }
    }
}

void bubbleSort2(info v[], int n){

    int i, j;

    for(j = 0; j < n; j++){

        for(i = 0; i < n-1; i++){

            if(v[i].size < v[i+1].size && v[i].cor == v[i+1].cor){
                info aux = v[i];
                v[i] = v[i+1];
                v[i+1] = aux;
            }
        }
    }
}

void bubbleSort3(info v[], int n){

    int i, j;

    for(j = 0; j < n; j++){

        for(i = 0; i < n-1; i++){

            if(strcmp(v[i].nome, v[i+1].nome) > 0  && v[i].cor == v[i+1].cor && v[i].size == v[i+1].size){
                info aux = v[i];
                v[i] = v[i+1];
                v[i+1] = aux;
            }
        }
    }
}
 
int main() {
    
    int i, j, n, first = 0;
    char cortemp[15];
    info alunos[60];

    scanf("%d", &n);
    getchar();

    while (n != 0){

        if (first == 0){
            first = 1;
        }
        else {
            printf("\n");
        }

        for (i = 0; i < n; i++){
            scanf("%[^\n]", alunos[i].nome);
            getchar();

            scanf("%s %c", cortemp, &alunos[i].size);
            getchar();

            alunos[i].cor = cortemp[0];
        }

        bubbleSort1(alunos, n);

        bubbleSort2(alunos, n);

        bubbleSort3(alunos, n);

        for (j = 0; j < n; j++){
            if (alunos[j].cor == 'b'){
                printf("branco %c %s\n", alunos[j].size, alunos[j].nome);
            }
            else if (alunos[j].cor == 'v'){
                printf("vermelho %c %s\n", alunos[j].size, alunos[j].nome);
            }
        }

        for (j = 0; j < n; j++){
            for(i = 0; i < 60; i++){
                alunos[j].nome[i] = '\0';
            }
            alunos[j].cor = '\0';
            alunos[j].size = '\0';
        }

        scanf("%d", &n);
        getchar();
    }

    return 0;
}