#include <stdio.h>

int main() {

    int i = 0, j = 0, a, b, numbers[100], possible;

    scanf("%d %d", &a, &b);
    
    while(1){

        numbers[i] = b;
        i++;

        if (a == b){
            possible = 1;
            break;
        }
        if (a > b){
            possible = 0;
            break;
        }

        if (b%2 == 0){
            b = b/2;
        }
        else if ((b - 1)%10 == 0){
            b = (b - 1)/10;
        }
        else{
            possible = 0;
            break;
        }
    }

    if (possible == 1){
        printf("YES\n");
        printf("%d\n", i);
        for (j = (i-1); j >= 0; j--){
            printf("%d", numbers[j]);
            if (j != 0){
                printf(" ");
            }
        }
        printf("\n");
    }
    else {
        printf("NO\n");
    }

    return 0;
}