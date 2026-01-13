#include <stdio.h>
 
int main() {
 
    int n, teste = 1;
    scanf("%d", &n);
    
    while(n != 0){
        printf("Teste %d\n", teste);
        
        int num_bilhete;
        
        for(int i = 0; i < n; i++){
            scanf("%d", &num_bilhete);
            if(num_bilhete == i+1) printf("%d\n\n", num_bilhete);
        }
        
        scanf("%d", &n);
        teste++;
    }
    return 0;
}