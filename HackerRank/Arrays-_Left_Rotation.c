#include <stdio.h>

#define MAX 1000100
 
int main() {

    int i, n, rot, count;
    int array[MAX];

    scanf("%d %d", &n, &rot);

    for (i = 0; i < MAX; i++){
        array[i] = -2;
    }

    for (i = 0; i < n; i++){
        scanf("%d", &array[i]);
    }

    for (i = 0; i < rot; i++){
        array[n+i] = array[i];
        array[i] = -1;
    }

    i = 0;

    while(1){
        if (array[i] != -1){
            printf("%d", array[i]);
            break;
        }
        i++;
    }

    i++;

    while (array[i] != -2){
        printf(" %d", array[i]);
        i++;
    }

    printf("\n");

    return 0;
}