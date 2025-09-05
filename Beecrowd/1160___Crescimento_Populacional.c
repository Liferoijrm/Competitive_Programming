#include <stdio.h>
#include <math.h>
 
int main() {
 
    int i, n;
    int temp;
    double pA, pB, tA, tB;
    
    scanf("%d", &n);
    
    for (i = 0; i < n; i++){
        
        temp = 0;
        
        scanf("%lf %lf %lf %lf", &pA, &pB, &tA, &tB);
        
        tA = (tA / 100) + 1;
        tB = (tB / 100) + 1;
        
        do {
            pA = floor(pA * tA);
            pB = floor(pB * tB);
        
            temp++;
        
            if (pA > pB){
                printf("%d anos.\n", temp);
                temp = 0;
                break;
            }
        } while (temp < 100);
        
        if (temp == 100){
            temp++;
        }
        if (temp > 100){
            printf("Mais de 1 seculo.\n");
        }
    }
 
    return 0;
}