#include <stdio.h>

typedef struct{
    int valor;
    int freq;
} info;
 
int main() {
    
    int n, i, temp;
    info num[3000] = {0};

    scanf("%d", &n);

    for (i = 0; i < n; i++){

        scanf("%d", &temp);

        num[temp].valor = temp;
        num[temp].freq++;
    }

    for (i = 0; i < 3000; i++){
        if (num[i].freq > 0){
            printf("%d aparece %d vez(es)\n", num[i].valor, num[i].freq);
        }
    }
    
    return 0;
}