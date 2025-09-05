#include <stdio.h>
 
int main() {
 
    int i, n, num1, num2, soma, vez = 1;
    char jog1 [15], jog2 [15];
    
    scanf("%d\n", &n);
    
    while (n != 0){
        
        scanf("%s", jog1);
        scanf("%s", jog2);
        
        printf("Teste %d\n", vez);
        
        for (i = 1; i <= n; i++){
            
            scanf("%d %d", &num1, &num2);
            
            soma = num1 + num2;
            
            if (soma%2 == 0){
                
                printf("%s\n", jog1);
                
            }
            
            else if (soma%2 != 0){
                
                printf("%s\n", jog2);
                
            }
            
        }
    
        printf("\n");
        vez++;
        scanf("%d", &n);    
    }
 
    return 0;
}