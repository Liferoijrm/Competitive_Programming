#include <stdio.h>

void scanVector(int v[], int n){

    int i;

    for (i = 0; i < n; i++){
        scanf("%d", &v[i]);
    }
}

int verify (int i, int carimbadas[], int compradas[], int c){

    int j;

     for (j = 0; j < c; j++){

        if (carimbadas[i] == compradas[j]){
            return 1;
        } 
    }

    return 0;
}
 
int main() {
    
    int a, b, c, i, encontradas = 0, restantes;

    scanf("%d %d %d", &a, &b, &c);

    int carimbadas[b], compradas[c];

    scanVector(carimbadas, b);

    scanVector(compradas, c);

    for (i = 0; i < b; i++){
        if (verify(i, carimbadas, compradas, c) == 1){
            encontradas++;
        }
    }

    restantes = b - encontradas;

    printf("%d\n", restantes);
 
    return 0;
}