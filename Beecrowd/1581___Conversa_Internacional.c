#include <stdio.h>
#include <string.h>

int main(){

    int n, idx;

    scanf("%d", &n);
    getchar();

    for (idx = 0; idx < n; idx++){
        
        int i, num, diferente = 0;
        char idioma1[21], idioma2[21];

        scanf("%d", &num);
        getchar();
        scanf("%s", idioma1);
        getchar();
        scanf("%s", idioma2);
        getchar();

        for (i = 1; i < num; i++){

            if(strcmp(idioma1, idioma2) != 0){
                diferente = 1;
            }
            
            if (i != (num - 1)){
                strcpy(idioma1, idioma2);
                scanf("%s", idioma2);
                getchar();
            }
        }

        if (diferente == 0){
            printf("%s\n", idioma2);
        }
        else {
            printf("ingles\n");
        }
    }

    return 0;
}