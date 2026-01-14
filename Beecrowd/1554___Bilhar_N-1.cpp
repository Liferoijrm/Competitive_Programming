#include <stdio.h>
#include <math.h>
 
int main() {
 
    int t;
    scanf("%d", &t);
    
    while(t--){
        int n;
        scanf("%d", &n);
        
        int xB, yB, closest = 1;
        float closest_distance = 10000000.0;
        scanf("%d %d", &xB, &yB);
        
        for(int i = 0; i < n; i++){
            int xA, yA;
            scanf("%d %d", &xA, &yA);
            
            float distance = sqrt(pow(xB - xA, 2) + pow(yB - yA, 2));
            
            if(distance < closest_distance){
                closest_distance = distance;
                closest = i+1;
            }
        }
        
        printf("%d\n", closest);
    }
 
    return 0;
}