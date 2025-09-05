#include <stdio.h>
#include <stdlib.h>

void print_format(int result, int* first) {
    if (*first != 0) {
        printf(" %d", result);
    } else {
        printf("%d", result);
        *first = 1;
    }
}

int main() {
    int n;
    scanf("%d", &n);

    for (int idx = 0; idx < n; idx++) {
        int num, x, result;
        scanf("%d", &num);

        int* lista = (int*) malloc(num * sizeof(int));

        for (int i = 0; i < num; i++) {
            scanf("%d", &lista[i]);
        }

        int first = 0;

        for (int i = 0; i < num; i++) {
            scanf("%d", &x);

            result = x - lista[i];

            print_format(result, &first);

            if ((i+1) == num){
                break;
            }

            if (lista[i+1] < x){
                lista[i+1] = x;
            }
        }

        free(lista);

        printf("\n");
    }

    return 0;
}