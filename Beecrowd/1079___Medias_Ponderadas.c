#include <stdio.h>
 
int main() {
 
    int i, n;
    float a, b, c, media;
    
    scanf("%d\n", &n);
    
    for (i = 0; i < n; i++){
        
        scanf("%f %f %f", &a, &b, &c);
        
        media = ((a*2) + (b*3) + (c*5))/10;
        
        printf("%.1f\n", media);
    }
 
    return 0;
}