#include <stdio.h>
 
int main(){
    
    int n;
    
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++){
        
        int ax, bx, cx, dx;
        int ay, by, cy, dy;
        int rx, ry;
        
        scanf("%d %d %d %d %d %d %d %d %d %d", &ax, &ay, &bx, &by, &cx, &cy, &dx, &dy, &rx, &ry);
        
        if((rx < ax) || (ry < ay) || (rx > cx) || (ry > cy)){
            printf("0\n");
        }
        
        else{
            printf("1\n");
        }
    }
 
    return 0;
}