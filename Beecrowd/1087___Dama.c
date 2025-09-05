#include <stdio.h>
#include <math.h>
 
int main() {
 
    int i, mov_min;
    double x1, y1, x2, y2;
   
    for (i = 0; i < 4096; i++){
       
        scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
       
        if ((x1 == x2) && (y1 == y2)){
           
            if ((x1 == 0) && (y1 == 0)){
                break;
            }
            else {
                mov_min = 0;
                printf("%d\n", mov_min);
            }
        }
        else if (x1 == x2){
            mov_min = 1;
            printf("%d\n", mov_min);
        }   
        else if (y1 == y2){
            mov_min = 1;
            printf("%d\n", mov_min);
        }   
        else {
            if ((fabs(x1 - x2)) == (fabs(y1 - y2))){
                mov_min = 1;
                printf("%d\n", mov_min); 
            }
            else {
                mov_min = 2;
                printf("%d\n", mov_min);
            }
        }
    }
   
    return 0;
}