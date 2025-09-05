#include <stdio.h>
 
int main() {
 
    int a, b, c, mab, mmc;
 
    scanf("%d %d %d", &a, &b, &c);
 
    mab = (a + b + abs(a - b))/2;
    mmc = (mab + c + abs(mab - c))/2;
 
    printf("%d eh o maior\n", mmc);

    return 0;
}