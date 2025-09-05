#include <stdio.h>
 
int main() {

    int n, div, count = 0, i, j;

    scanf("%d %d", &n, &div);

    int array[n];

    for (i = 0; i < n; i++){
        scanf("%d", &array[i]);
    }

    for (i = 0; i < n; i++){
        for (j = i; j < n; j++){
            if (i != j){
                if ((array[i] + array[j])%div == 0){
                    count++;
                }
            }
        } 
    }

    printf("%d\n", count);

    return 0;
}