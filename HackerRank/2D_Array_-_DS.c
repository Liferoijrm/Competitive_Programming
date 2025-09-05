#include <stdio.h>
 
int main() {

    int i, j, count = -100;
    int array[6][6];
    int hsums[16];

    for (i = 0; i < 6; i++){
        for (j = 0; j < 6; j++){
            scanf("%d", &array[i][j]);
        } 
    }

    for (i = 0; i < 4; i++){
        for (j = 0; j < 4; j++){
            hsums[j + (4*i)] = array[i][j] + array[i][j+1] + array[i][j+2] + array[i+1][j+1] + array[i+2][j] + array[i+2][j+1] + array[i+2][j+2];
        } 
    }

    for (i = 0; i < 16; i++){
        if (hsums[i] > count){
            count = hsums[i];
        }
    }

    printf("%d\n", count);

    return 0;
}