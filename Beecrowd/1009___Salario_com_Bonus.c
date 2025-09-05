#include <stdio.h>
 
int main() {
 
    char n [30];
    double f, m, s;
    
    scanf("%s %lf %lf", n, &f, &m);
    s = f + m*0.15;
    
    printf("TOTAL = R$ %.2lf\n", s);
 
    return 0;
}