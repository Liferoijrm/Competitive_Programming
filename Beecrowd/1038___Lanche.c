#include <stdio.h>
 
int main() {
 
   int c1, c2;
   float valf;
   
   scanf("%d %d", &c1, &c2);
   
   if (c1 == 1) {
       valf = 4.00;
   }
   else if (c1 == 2) {
       valf = 4.50;
   }
   else if (c1 == 3) {
       valf = 5.00;
   }
   else if (c1 == 4) {
       valf = 2.00;
   }
   else {
       valf = 1.50;
   }
   
   valf = valf*c2;
   
   printf("Total: R$ %.2f\n", valf);
   
    return 0;
}