#include <stdio.h> 
#include <string.h>
 
int main(){
 
    int n, param, passam = 0;
 
    scanf("%d %d", &n, &param);
 
    int competidores[n];
 
    for(int i = 0; i < n; i++){
        scanf("%d", &competidores[i]);
    }
 
    param = competidores[param-1];
    
    for(int i = 0; i < n; i++){
        if (competidores[i] >= param && competidores[i] > 0){
            passam++;
        }
        else{
            break;
        }
    }
 
    printf("%d\n", passam);
 
    return 0;
}