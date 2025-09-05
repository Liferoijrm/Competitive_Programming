#include <stdio.h>

void scanVector(int v[], int n){

    int i;

    for (i = 0; i < n; i++){
        scanf("%d", &v[i]);
    }
}

int verify (int estrelas[], int a, int b){

    int encontradas = 0, i, fluxo;

     for (i = 0; i < b; i++){

        fluxo = estrelas[i]*a;

        if (fluxo >= 40000000){
            encontradas++;
        } 
    }

    return encontradas;
}
 
int main() {
    
    int a, b;

    scanf("%d", &a);

    scanf("%d", &b);

    int estrelas[b];

    scanVector(estrelas, b);

    printf("%d\n", verify(estrelas, a, b));
 
    return 0;
}