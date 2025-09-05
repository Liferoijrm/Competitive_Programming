#include <stdio.h>
#include <string.h>
 
int main() {
 
    int n, idx;
    
    scanf("%d", &n);
    getchar();
    
    for (idx = 0; idx < n; idx++){
        
        int i, mode = 1;
        char string[51];
        
        scanf("%[^\n]", string);
        getchar();
        
        for (i = 0; i < strlen(string); i++){
            
            if (string[i] != ' ' && mode == 1){
                printf("%c", string[i]);
                mode = 2;
            }
            else if (string[i] == ' ' && mode == 2){
                mode = 1;
            }
        }
        
        printf("\n");
    }
 
    return 0;
}