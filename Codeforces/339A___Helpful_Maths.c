#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int compare (const void* a, const void* b){
    return (*(char *)a - *(char *)b);
}
 
int main() {

    int i;
    char string[101], aux[101];

    scanf("%s", string);

    if (strlen(string) == 1){
        printf("%s\n", string);
        return 0;
    }

    for (i = 0; i < ((strlen(string)/2)+1); i++){
        aux[i] = string[i*2];
    }

    aux[i] = '\0';

    int size = strlen(aux);

    qsort(aux, size, sizeof(char), compare);

    printf("%c", aux[0]);

    for (i = 1; i < strlen(aux); i++){
        printf("+%c", aux[i]);
    }

    printf("\n");

    return 0;
}