#include <stdio.h> 
#include <string.h>
 
int main(){
 
    int n, capacity, alunos = 0;
 
    scanf("%d %d", &n, &capacity);
 
    for(int i = 0; i < n; i++){
        int aux;
        scanf("%d", &aux);
        alunos+=aux;
    }
    
    if (alunos >= capacity) alunos = capacity;
 
    printf("%d\n", alunos/3);
 
    return 0;
}