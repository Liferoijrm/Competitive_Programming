#include <stdio.h>
 
int main() {
 
   int i, n, cont1, cont2 = 1;
   int num1, num2, razao;
   
   scanf("%d", &n);
   
   scanf("%d %d", &num1, &num2);
   
   razao = num2 - num1;
   
   cont1 = razao;
   
   scanf("%d", &num1);
   
   for (i = 2; i < n; i++){
       
       razao = num1 - num2;
       
       if (razao != cont1){
           cont1 = razao;
           cont2++;
       }
       
       num2 = num1;
       
       scanf("%d", &num1);
   }
   
   printf("%d\n", cont2);
 
    return 0;
}