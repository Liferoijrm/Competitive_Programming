#include <stdio.h>
 
int main() {
 
    int i, n, num;
    int cont1 = 0, cont2 = 1, cont3 = 0;
    
    scanf("%d", &n);
    
    scanf("%d", &num);
    
    cont1 = num;
    
    for (i = 1; i < n; i++){
        
        scanf("%d", &num);
        
        if (num == cont1){
            
            cont2++;
        }
        
        else if (num != cont1){
            
            cont1 = num;
            
            if (cont2 > cont3){
                cont3 = cont2;
            }
            
            cont2 = 1;
        }
     
    }
    
    if (cont2 > cont3){
        cont3 = cont2;
    }     
    
    printf("%d\n", cont3);
 
    return 0;
}