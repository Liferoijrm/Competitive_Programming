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

void doubleIdentifier(int v[], int n){
    
    int i;
    int vezes = 1, duplicatas = 0;
    
    for (i = 0; i < n-1; i++){
        
        if (v[i] == v[i+1]){
           vezes++;
        }
        
        else{
            if (vezes > 1){
                duplicatas++;
            }
            vezes = 1;
        }
    }
    
    if (vezes > 1){
        duplicatas++;
    }
    
    printf("%d\n", duplicatas);
}
 
int main() {
 
    int i, a, b;
    
    scanf("%d %d", &a, &b);
    
    while (a != 0 || b != 0){
        
        int array[b];
    
        for (i = 0; i < b; i++){
            scanf("%d", &array[i]);
        }
    
        bubbleSort(array, b);
    
        doubleIdentifier(array, b);
        
        scanf("%d %d", &a, &b);
    }
 
    return 0;
}