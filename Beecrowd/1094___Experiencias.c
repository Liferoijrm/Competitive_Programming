#include <stdio.h>
 
int main() {
 
    int i, n, q, q_total = 0, q_coelhos = 0, q_ratos = 0, q_sapos = 0;
    float p_coelhos, p_ratos, p_sapos;
    char tipo;
    
    scanf("%d\n", &n);
    
    for (i = 0; i < n; i++){
        
        scanf("%d %c", &q, &tipo);
        
        q_total+=q;
        
        if (tipo == 'C'){
            q_coelhos+=q;
        }
        else if (tipo == 'R'){
            q_ratos+=q;
        }
        else if (tipo == 'S'){
            q_sapos+=q;
        }
    }
    
    p_coelhos = ((float)q_coelhos / q_total)*100;
    p_ratos = ((float)q_ratos / q_total)*100;
    p_sapos = ((float)q_sapos / q_total)*100;
    
    printf("Total: %d cobaias\n", q_total);
    printf("Total de coelhos: %d\n", q_coelhos);
    printf("Total de ratos: %d\n", q_ratos);
    printf("Total de sapos: %d\n", q_sapos);
    printf("Percentual de coelhos: %.2f %\n", p_coelhos);
    printf("Percentual de ratos: %.2f %\n", p_ratos);
    printf("Percentual de sapos: %.2f %\n", p_sapos);
 
    return 0;
}