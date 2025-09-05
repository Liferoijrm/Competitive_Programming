#include <stdio.h>
#include <string.h>

int main() {
    
    int n, n2, k, i, j, size;

    scanf("%d", &n);
    getchar();

    char string1[n][101];
    char string2[101];
    
    for (k = 0; k < n; k++){
        scanf("%s", string1[k]);
        getchar();
    }

    scanf ("%d", &n2);

    for (k = 0; k < n2; k++){

        int cont = 0, big1, big2 = 0, fail = 0;

        scanf("%s", string2);
        getchar();

        size = strlen(string2);

        for (i = 0; i < n; i++){

            for (j = 0; j < size; j++){
                if (string2[j] != string1[i][j]){
                    fail = 1;
                    break;
                }
            }

            if (fail == 0){
                cont++;
                big1 = strlen(string1[i]);

                if (big1 > big2){
                    big2 = big1;
                } 
            }

            fail = 0;
        }

        if (cont != 0){
            printf("%d %d\n", cont, big2);
        }
        else {
            printf("-1\n");
        }
    }
  
    return 0;
}