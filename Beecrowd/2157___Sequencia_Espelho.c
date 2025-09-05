#include <stdio.h>
 
int main() {
 
    int n, i, j, idx;
    int a, b;

    scanf("%d", &n);

    for (idx = 0; idx < n; idx++){

        scanf("%d %d", &a, &b);

        int size = b - a + 1;

        int inverso[size][5];
        int aux[5];

        for (j = a; j<= b; j++){
            printf("%d", j);

            aux[0] = j/10000;
            aux[1] = j/1000 - aux[0]*10;
            aux[2] = j/100 - aux[0]*100 - aux[1]*10;
            aux[3] = j/10 - aux[0]*1000 - aux[1]*100 - aux[2]*10;
            aux[4] = j - aux[0]*10000 - aux[1]*1000 - aux[2]*100 - aux[3]*10;

            inverso[(j - a)][0] = aux[4];
            inverso[(j - a)][1] = aux[3];
            inverso[(j - a)][2] = aux[2];
            inverso[(j - a)][3] = aux[1];
            inverso[(j - a)][4] = aux[0];
        }

        for (j = b; j >= a; j--){

            aux[0] = j/10000;
            aux[1] = j/1000 - aux[0]*10;
            aux[2] = j/100 - aux[0]*100 - aux[1]*10;
            aux[3] = j/10 - aux[0]*1000 - aux[1]*100 - aux[2]*10;
            aux[4] = j - aux[0]*10000 - aux[1]*1000 - aux[2]*100 - aux[3]*10;

            if (aux[4] != 0 || (aux[1] != 0 || aux[2] != 0 || aux[3] != 0 || aux[0] != 0)) printf("%d", aux[4]);
            if (aux[3] != 0 || (aux[1] != 0 || aux[2] != 0 || aux[0] != 0)) printf("%d", aux[3]);
            if (aux[2] != 0 || (aux[1] != 0 || aux[0] != 0)) printf("%d", aux[2]);
            if (aux[1] != 0 || (aux[0] != 0)) printf("%d", aux[1]);
            if (aux[0] != 0) printf("%d", aux[0]);
        }

        printf("\n");
    }

    return 0;
}