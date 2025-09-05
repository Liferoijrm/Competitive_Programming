#include <stdio.h>

void bubbleSort(int v[], int n){
    
    int i, j, temp;
    
    for(j = 0; j < n; j++){
        
        for(i = 0; i < n-1; i++){
            
            if(v[i] > v[i+1]){
                temp = v[i];
                v[i] = v[i+1];
                v[i+1] = temp;
            }
        }
    }
}

void repCounter(int v[], int a, int b){
    
    int i;
    int vezes = 1, repetidas = 0, restantes;
    
    for (i = 0; i < b-1; i++){
        
        if (v[i] == v[i+1]){
           vezes++;
        }
        
        else{
            if (vezes > 1){
                repetidas+=(vezes - 1);
            }
            vezes = 1;
        }
    }
    
    if (vezes > 1){
        repetidas+=(vezes - 1);
    }
    
    restantes = a - (b - repetidas);
    
    printf("%d\n", restantes);
}
 
int main() {
 
    int i, a, b;
    
    scanf("%d", &a);
    scanf("%d", &b);
        
    int array[b];
    
    for (i = 0; i < b; i++){
        scanf("%d", &array[i]);
    }
    
    bubbleSort(array, b);
    
    repCounter(array, a, b);
 
    return 0;
}