#include <stdio.h>

int retMdc (int a, int b){

    if (a%b == 0){
        return b;
    }

    else {
        return retMdc(b, a%b);
    }
}
 
int main() {
 
    int n, i, mdc, a, b;

    scanf("%d", &n);
    
    for (i = 0; i < n; i++){

        scanf("%d %d", &a, &b);

        if (b > a){
            int temp = a;
            a = b; 
            b = temp;
        }

        mdc = retMdc(a, b);

        printf("%d\n", mdc);
    }
 
    return 0;
}