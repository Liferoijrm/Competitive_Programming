#include <stdio.h>
#include <string.h>

typedef struct{
    char palavra[51];
} info;

void bubbleSort(info lista[], int size){

    int i, j;
    char aux[51];

    for (i = 0; i < size; i++){

        for (j = 0; j < (size-1); j++){

            if (strlen(lista[j].palavra) < strlen(lista[j+1].palavra)){
                strcpy(aux, lista[j].palavra);
                strcpy(lista[j].palavra, lista[j+1].palavra);
                strcpy(lista[j+1].palavra, aux);
            }
        }
    }
}
 
int main() {
    
    info lista[50];
    int n, idx, i, j, k;
    
    scanf("%d", &n);
    getchar(); 
    
    for (idx = 0; idx < n; idx++){

        char temp[100000]; 

        for (i = 0; i < 50; i++){ 
            for (j = 0; j < 51; j++){
                lista[i].palavra[j] = '\0';
            }
        }
        
        scanf("%[^\n]", temp);
        getchar();

        int size = 0;
        i = 0, j = 0, k = 0;

        while (temp[i] != '\0') { 

            if (temp[i] != ' ') {
                lista[j].palavra[k] = temp[i];
                k++;
            } 

            else if (temp[i] == ' ') {
                size++;
                j++;
                k = 0;
            }

            i++;
        }

        size++;

        bubbleSort(lista, size);

        printf("%s", lista[0].palavra);

        if (size == 1){
            printf("\n");
        }
        else {
            for (i = 1; i < size; i++){
                printf(" %s", lista[i].palavra);
            }
            printf("\n");
        }
    }
 
    return 0;
}