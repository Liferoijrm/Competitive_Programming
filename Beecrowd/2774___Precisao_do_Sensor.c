#include <stdio.h>
#include <math.h>
 
int main() {
 
   int i, h, m, qt;
   double xi, somatorio, somatorio_q, media, numerador, precisao; 
   
   
   while(scanf("%d %d", &h, &m) != EOF){
   
   qt = h*60 / m;
   
   somatorio = 0;
   
   somatorio_q = 0;
   
   for (i = 0; i < qt; i++){
       
       scanf("%lf", &xi);
       
       somatorio+=xi;
       
       xi = xi*xi;
       
       somatorio_q+=xi;
   }
   
   media = somatorio / qt;
   
   numerador = somatorio_q - 2 * media * somatorio + qt * media * media;
   
   precisao = sqrt(numerador / (qt - 1));
   
   printf("%.5lf\n", precisao);
   
   }
 
    return 0;
}