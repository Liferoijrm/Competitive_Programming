#include <stdio.h>
 
int main() {
 
    float t, vm;
    float ql;
    
    scanf("%f %f", &t, &vm);
    
    ql = vm*t/12;
    
    printf("%.3f\n", ql);
 
    return 0;
}