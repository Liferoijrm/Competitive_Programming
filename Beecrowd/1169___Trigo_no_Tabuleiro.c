#include <stdio.h>
#include <string.h>

long long int calcGraos (int n){

    if (n == 1){
        return 1;
    }
    else {
        return 2*calcGraos(n-1);
    }
}
 
int main() {

    int n, idx, i, num;

    scanf("%d", &n);

    for (idx = 0; idx < n; idx++){

        scanf("%d", &num);

        unsigned long long int qtd = calcGraos(num)*2 - 1;
        unsigned long long int result = qtd / 12000;

        printf("%lld kg\n", result);
    }
 
    return 0;
}