#include <stdio.h>
#include <string.h>

typedef struct{
    char nome[51];
} info;

int main(){

    int n;
    int i, j, first = 0;

    scanf("%d", &n);
    getchar();

    while (n != 0){

        if (first == 1){
            printf("\n");
        }
        else{
            first = 1;
        }
        
        int count1, count2 = 0, offset;
        info lista[50];
        
        for(i = 0; i < 50; i++){
            for (j = 0; j < 51; j++){
                lista[i].nome[j] = '\0';
            }
        }

        for(i = 0; i < n; i++){
            scanf("%s", lista[i].nome);
            getchar();
        }

        for(i = 0; i < n; i++){
            
            count1 = strlen(lista[i].nome);

            if (count1 > count2){
                count2 = count1;
            }
        }

        for(i = 0; i < n; i++){

            offset = count2 - strlen(lista[i].nome);

            for (j = 0; j < offset; j++){
                printf(" ");
            }
            
            printf("%s\n", lista[i].nome);
        }

        scanf("%d", &n);
        getchar();
    }

    return 0;
}