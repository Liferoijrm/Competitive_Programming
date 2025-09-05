#include <stdio.h>
 
int main() {
 
    int n, m;
    int i, j;

    scanf("%d %d", &n, &m);

    int matriz[n][m];
    int somatorio_lin[n];
    int somatorio_col[m];

    for (i = 0; i < n; i++){
        for (j = 0; j < m; j++){
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i = 0; i < n; i++){
        somatorio_lin[i] = 0;
    }

    for (i = 0; i < m; i++){
        somatorio_col[i] = 0;
    }

    for (i = 0; i < n; i++){
        for (j = 0; j < m; j++){
            somatorio_lin[i]+=matriz[i][j];
        }
    }

    for (i = 0; i < m; i++){
        for (j = 0; j < n; j++){
            somatorio_col[i]+=matriz[j][i];
        }
    }

    int cont1 = 0, cont2 = 0;

    for (i = 0; i < n; i++){
        cont1 = somatorio_lin[i];

        if (cont1 > cont2){
            cont2 = cont1;
        }
    }

    for (i = 0; i < m; i++){
        cont1 = somatorio_col[i];

        if (cont1 > cont2){
            cont2 = cont1;
        }
    }

    printf("%d\n", cont2);
 
    return 0;
}