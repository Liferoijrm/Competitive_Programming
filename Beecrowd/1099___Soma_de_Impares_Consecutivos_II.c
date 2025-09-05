#include <stdio.h>
 
int main() {
 
    int idx, idx2, n, a, b, c;
    int qtd_imp, imp1;
        
    scanf("%d\n", &n);
    
    for (idx = 0; idx < n; idx++){
        
        int s = 0;
        
        scanf("%d %d\n", &a, &b);
        
        if (a > b){
            c = b;
            b = a;
            a = c;
        }
        
        if ((a%2 == 0) && (b%2 == 0)){
            qtd_imp = (b - a) / 2;
            imp1 = a + 1;
            
            for (idx2 = 0; idx2 < qtd_imp; idx2++){
                s+=imp1;
                imp1+=2;
            }
            
            printf("%d\n", s);
        }
        else if ((a%2 != 0) && (b%2 != 0)){
            qtd_imp = ((b - a) / 2) - 1;
            imp1 = a + 2;
            
            for (idx2 = 0; idx2 < qtd_imp; idx2++){
                s+=imp1;
                imp1+=2;
            }
            
            printf("%d\n", s);
        }
        else if ((a%2 != 0)){
            qtd_imp = ((b - a) / 2.0);
            imp1 = a + 2;
            
            for (idx2 = 0; idx2 < qtd_imp; idx2++){
                s+=imp1;
                imp1+=2;
            }
            
            printf("%d\n", s);
        }
        else if ((b%2 != 0)){
            qtd_imp = ((b - a) / 2.0);
            imp1 = a + 1;
            
            for (idx2 = 0; idx2 < qtd_imp; idx2++){
                s+=imp1;
                imp1+=2;
            }
            
            printf("%d\n", s);
        }
    }
    
    return 0;
}