#include <stdio.h>
 
int main() {
 
    int n, n100, n50, n20, n10, n5, n2, n1;
   
    scanf("%d", &n);
   
    n100 = n/100.0;
    n50 = (n - n100*100.0)/50.0;
    n20 = (n - n100*100.0 - n50*50.0)/20.0;
    n10 = (n - n100*100.0 - n50*50.0 - n20*20.0)/10.0;
    n5 = (n - n100*100.0 - n50*50.0 - n20*20.0 - n10*10.0)/5.0;
    n2 = (n - n100*100.0 - n50*50.0 - n20*20.0 - n10*10.0 - n5*5.0)/2.0;
    n1 = (n - n100*100.0 - n50*50.0 - n20*20.0 - n10*10.0 - n5*5.0 - n2*2.0);
   
    printf("%d\n", n);
    printf("%d nota(s) de R$ 100,00\n", n100);
    printf("%d nota(s) de R$ 50,00\n", n50);
    printf("%d nota(s) de R$ 20,00\n", n20);
    printf("%d nota(s) de R$ 10,00\n", n10);
    printf("%d nota(s) de R$ 5,00\n", n5);
    printf("%d nota(s) de R$ 2,00\n", n2);
    printf("%d nota(s) de R$ 1,00\n", n1);

    return 0;
}