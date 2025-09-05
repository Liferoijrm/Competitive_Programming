#include <stdio.h>
#include <string.h>

typedef struct{

    char frase[51];
} info;

int verifySpace(char string[], int pos){

    int i;

    for (i = pos; i < strlen(string); i++){
        if (string[i] != ' '){
            return 1;
        }
    }

    return 0;
}

int main(){

    int n, i, j, first = 0;

    scanf("%d", &n);
    getchar();

    while (n != 0){

        if (first == 0){
            first = 1;
        }
        else{
            printf("\n");
        }

        info lista[100];
        char temp[51];

        for (i = 0; i < 100; i++){
            for (j = 0; j < 51; j++){
                lista[i].frase[j] = '\0';
            }
        }

        for (i = 0; i < n; i++){

            int k = 0;

            scanf("%[^\n]", temp);
            getchar();

            for (j = 0; j < strlen(temp); j++){
                if (temp[j] != ' '){
                    lista[i].frase[k] = temp[j];
                    k++;
                }
                else if (j != 0 && temp[j] == ' ' && temp[j-1] != ' ' && verifySpace(temp, j) == 1){
                    lista[i].frase[k] = ' ';
                    k++;
                }
            }
        }

        int cont2 = 0, cont1, offset;

        for (i = 0; i < n; i++){
            cont1 = strlen(lista[i].frase);

            if (cont1 > cont2){
                cont2 = cont1;
            }
        }

        for (i = 0; i < n; i++){

            offset = cont2 - strlen(lista[i].frase);

            for (j = 0; j < offset; j++){
                printf(" ");
            }

            printf("%s\n", lista[i].frase);
        }

        scanf("%d", &n);
        getchar();
    }

    return 0;
}