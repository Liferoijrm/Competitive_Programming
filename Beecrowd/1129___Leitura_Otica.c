#include <stdio.h>

void verificador(int a, int b, int c, int d, int e){

    if ((a <= 127) && (b > 127) && (c > 127) && (d > 127) && (e > 127)) printf("A\n");

    else if ((a > 127) && (b <= 127) && (c > 127) && (d > 127) && (e > 127)) printf("B\n");

    else if ((a > 127) && (b > 127) && (c <= 127) && (d > 127) && (e > 127)) printf("C\n");

    else if ((a > 127) && (b > 127) && (c > 127) && (d <= 127) && (e > 127)) printf("D\n");

    else if ((a > 127) && (b > 127) && (c > 127) && (d > 127) && (e <= 127)) printf("E\n");
    
    else printf("*\n");
}

int main(){

    int t, n;
    int f, g, h, i, j;

    scanf("%d", &n);

    while (n != 0){

        for (t = 0; t < n; t++){
            scanf("%d %d %d %d %d", &f, &g, &h, &i, &j);
            verificador(f, g, h, i, j);
        }

        scanf("%d", &n);
    }

    return 0;
}