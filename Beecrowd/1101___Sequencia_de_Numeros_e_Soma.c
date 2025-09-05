#include <stdio.h>
 
int main() {
 
    int big, sml, sum, i;

    do{
        scanf("%d %d", &big, &sml);

        if (big <= 0 || sml <= 0) break;

        sum = 0;

        if (sml > big) {
            int temp = sml;
            sml = big;
            big = temp;
        }

        for (i = sml; i <= big; i++) {
            printf("%d ", i);
            sum += i;
        }

        printf("Sum=%d\n", sum);

    } while (big > 0 || sml > 0);
    
    return 0;
}