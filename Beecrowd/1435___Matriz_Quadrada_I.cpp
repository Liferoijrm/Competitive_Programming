#include <stdio.h>
#include <math.h>

int main() {

    int n;
    scanf("%d", &n);

    while (n != 0) {

        int matriz[n][n];

        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                matriz[i][j] = 0;

        for (int i = 0; i < ceil(n / 2.0); i++)
            for (int j = 0; j < i + 1; j++)
                matriz[i][j] = j + 1;

        for (int i = 0; i < ceil(n / 2.0); i++)
            for (int j = n - 1; j > n - i - 2; j--)
                matriz[i][j] = n - j;

        for (int i = 0; i < ceil(n / 2.0); i++)
            for (int j = 0; j < n; j++)
                if (matriz[i][j] == 0)
                    matriz[i][j] = i + 1;

        for (int i = 0; i < ceil(n / 2.0); i++) {
            for (int j = 0; j < n; j++) {
                if (j > 0) printf(" ");
                printf("%3d", matriz[i][j]);
            }
            printf("\n");
        }

        for (int i = (n / 2) - 1; i >= 0; i--) {
            for (int j = 0; j < n; j++) {
                if (j > 0) printf(" ");
                printf("%3d", matriz[i][j]);
            }
            printf("\n");
        }
        printf("\n");
        scanf("%d", &n);
    }

    return 0;
}