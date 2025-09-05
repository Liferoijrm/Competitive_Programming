#include <stdio.h>

int main(){

    int n, i;

    scanf("%d", &n);

    for (i = 0; i < n; i++){

        char operador;
        int a, b, result;

        scanf("%d%c%d", &a, &operador, &b);

        if (a == b){
            result = a*b;
            printf("%d\n", result);
        }
        else if (operador >= 'a' && operador <= 'z'){
            result = a + b;
            printf("%d\n", result);
        }
        else {
            result = b - a;
            printf("%d\n", result);
        }
    }

    return 0;
}