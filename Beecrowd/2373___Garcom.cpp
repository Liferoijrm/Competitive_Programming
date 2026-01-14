#include <stdio.h>
 
int main() {
 
    int n, total = 0, latas, copos;
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++){
        scanf("%d %d", &latas, &copos);
        if(latas > copos) total+=copos;
    }
    
    printf("%d\n", total);
    
    return 0;
}