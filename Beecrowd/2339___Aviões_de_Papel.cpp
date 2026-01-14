#include <stdio.h>
 
int main() {
 
    int c, p, qtd;
    
    scanf("%d %d %d", &c, &p, &qtd);
    
    p/c >= qtd? printf("S\n") : printf("N\n");
 
    return 0;
}