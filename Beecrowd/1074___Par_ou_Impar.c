#include <stdio.h>
 
int main() {
 
    int i, n, read;
    
    scanf("%d\n", &n);
    
    for (i = 0; i < n; i++){  
        scanf("%d", &read);
        
        if (read == 0){
            printf("NULL\n");
        }
        else if ((read%2) == 0){
            if(read > 0){
            printf("EVEN POSITIVE\n");
            }
            else {
            printf("EVEN NEGATIVE\n");    
            }
        }
        else {
            if(read > 0){
            printf("ODD POSITIVE\n");
            }
            else {
            printf("ODD NEGATIVE\n");    
            }
        } 
    }
    
    return 0;
}