#include <stdio.h>
 
int main() {
 
    int i;
    
    double array[100];
    
    scanf("%lf", &array[0]);
    
    for (i = 1; i < 100; i++){
        array[i] = array[i-1]/2;
    }
    
    for (i = 0; i < 100; i++){
        printf("N[%d] = %.4lf\n", i, array[i]);
    }
 
    return 0;
}