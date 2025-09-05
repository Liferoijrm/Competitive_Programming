#include <stdio.h>
#include <string.h>

typedef struct{
    char nome[101];
    int power;
    int kills;
    int deaths;
} info;

void multBubbleSort (info v[], int n) {
    
    int i, j;
    
    for(j = 0; j < n; j++) {
        for(i = 0; i < n-1; i++) {
            
            int troca = 0;
            
            if(v[i].power > v[i+1].power) {
                troca = 1;
            } 
            else if(v[i].power == v[i+1].power && v[i].kills > v[i+1].kills) {
                troca = 1;
            } 
            else if(v[i].power == v[i+1].power && v[i].kills == v[i+1].kills && v[i].deaths < v[i+1].deaths) {
                troca = 1;
            } 
            else if(v[i].power == v[i+1].power && v[i].kills == v[i+1].kills && v[i].deaths == v[i+1].deaths && strcmp(v[i].nome, v[i+1].nome) < 0) {
                troca = 1;
            }

            if(troca == 1){
                info aux = v[i];
                v[i] = v[i+1];
                v[i+1] = aux;
            }
        }
    }
}

int main() {
    
    int i, j, n;
    info god[100];

    scanf("%d", &n);
    getchar();

    for (j = 0; j < n; j++){
        scanf("%s %d %d %d", god[j].nome, &god[j].power, &god[j].kills, &god[j].deaths);
        getchar();
    }

    multBubbleSort(god, n);

    printf("%s\n", god[n-1].nome);

    return 0;
}