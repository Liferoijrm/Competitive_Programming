#include <stdio.h>
#include <string.h>
 
int main() {

    char risada[51];
    char vogais[51] = {'\0'};
    char contrario[51] = {'\0'};
    int i, k = 0;
 
    scanf("%s", risada);

    for(i = 0; i < strlen(risada); i++){
        if (risada[i] == 'a' || risada[i] == 'e' || risada[i] == 'i' || risada[i] == 'o' || risada[i] == 'u'){
            vogais[k] = risada[i];
            k++;
        }
    }

    int size = strlen(vogais);

    for(i = 0; i < strlen(vogais); i++){ 
        contrario[size - 1] = vogais[i];
        size--;
    }

    if (strcmp(contrario, vogais) == 0){
        printf("S\n");
    }
    else {
        printf("N\n");
    }
 
    return 0;
}