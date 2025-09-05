#include <stdio.h>
#include <math.h>
 
int main() {
 
    float n_real, n;
    int n100, n50, n20, n10, n5, n2, n1;
    int nc, c100, c50, c25, c10, c5, c1;
   
    scanf("%f", &n_real);
   
    n = floor(n_real);
   
    n100 = n/100.0;
    n50 = (n - n100*100)/50.0;
    n20 = (n - n100*100 - n50*50)/20.0;
    n10 = (n - n100*100 - n50*50 - n20*20)/10.0;
    n5 = (n - n100*100 - n50*50 - n20*20 - n10*10)/5.0;
    n2 = (n - n100*100 - n50*50 - n20*20 - n10*10 - n5*5)/2.0;
   
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", n100);
    printf("%d nota(s) de R$ 50.00\n", n50);
    printf("%d nota(s) de R$ 20.00\n", n20);
    printf("%d nota(s) de R$ 10.00\n", n10);
    printf("%d nota(s) de R$ 5.00\n", n5);
    printf("%d nota(s) de R$ 2.00\n", n2);
         
    n1 = (n - n100*100 - n50*50 - n20*20 - n10*10 - n5*5 - n2*2);   
    nc = round((n_real - floor(n_real))*100);
   
    c100 = n1;
   
    c50 = nc /50.0;
    c25 = (nc - c50*50)/25.0;
    c10 = (nc - c50*50 - c25*25)/10.0;
    c5 = (nc - c50*50 - c25*25 - c10*10)/5.0;
    c1 = (nc - c50*50 - c25*25 - c10*10 - c5*5);
   
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", c100);
    printf("%d moeda(s) de R$ 0.50\n", c50);
    printf("%d moeda(s) de R$ 0.25\n", c25);
    printf("%d moeda(s) de R$ 0.10\n", c10);
    printf("%d moeda(s) de R$ 0.05\n", c5);
    printf("%d moeda(s) de R$ 0.01\n", c1);
 
    return 0;
}