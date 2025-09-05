#include <stdio.h>
 
int main() {
 
    long long int i, n, star, cont_carneiros = 0, i2 = 1, n2, cont0 = 0;
    int exe = 1;
    
    scanf("%lld", &n);
    
    for (i = 0; i < n; i++){
        
        scanf("%lld", &star);
        
        if (star%2 != 0){
            
            star = star - 1;
            
            if (star == 0){
                star++;
                cont0++;
            }
            
            cont_carneiros+=star;
            
        }
        
        else if (star%2 == 0){
            
            star = star - 1;
            
            cont_carneiros+=star;
            
            n2 = n - i;
            
            while (i2 < n2){
                
                scanf("%lld", &star);
                
                cont_carneiros+=star;
                
                i2++;
            }
            
            cont_carneiros = cont_carneiros - i;
            
            i++;
            
            printf("%lld %lld\n", i, cont_carneiros);
            
            exe = 0;
            
            break;
        }
        
    }
    
    if (exe != 0){
        cont_carneiros = cont_carneiros - cont0;
        printf("%lld %lld\n", n, cont_carneiros);
    }
 
    return 0;
}