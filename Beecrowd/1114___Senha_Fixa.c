#include <stdio.h>
 
int main() {
 
    int n;
    
    do {
        scanf("%d", &n);
        
        if (n != 2002){
            printf("Senha Invalida\n");
        }
        else {
            printf("Acesso Permitido\n");
        }
    } while (n != 2002);
    
    return 0;
}