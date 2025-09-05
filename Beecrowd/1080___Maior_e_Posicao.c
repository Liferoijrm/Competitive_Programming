#include <stdio.h>
 
int main() {
 
    int i, n1, n2, aux = 0, aux2;
    
    for (i = 1; i <= 50; i++){
        
        scanf("%d", &n1);
        scanf("%d", &n2);
        
        if (n1 > n2){  
            if (n1 > aux){
                aux = n1;
                aux2 = i*2 - 1;
            }
            else if (n1 < aux){
                aux = aux;
            }
        }
        else {
            if (n2 > aux){
                aux = n2;
                aux2 = i*2;
            }
            else if (n2 < aux){
                aux = aux;
            }
        }
    }
    
    printf("%d\n", aux);
    printf("%d\n", aux2);
 
    return 0;
}