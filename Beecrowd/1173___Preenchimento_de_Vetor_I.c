#include <stdio.h>
 
int main() {
 
    int i;
    
    int array[10];
    
    scanf("%d", &array[0]);
    
    for (i = 1; i < 10; i++){
        array[i] = array[i-1]*2;
    }
    
    for (i = 0; i < 10; i++){
        printf("N[%d] = %d\n", i, array[i]);
    }
 
    return 0;
}