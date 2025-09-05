#include <stdio.h>

void emptyVector (int v[], int* pos){
    
    int i;
    
    if (v[0]%2 == 0){
        for (i = 0; i < 5; i++){
            printf("par[%d] = %d\n", i, v[i]);
        }
        *pos = 0;
    }
    
    if (v[0]%2 != 0){
        for (i = 0; i < 5; i++){
            printf("impar[%d] = %d\n", i, v[i]);
        }
        *pos = 0;
    }
}

void printRest (int v[], int pos){
    
    int i;
    
    if (v[0]%2 == 0){
        for (i = 0; i < pos; i++){
            printf("par[%d] = %d\n", i, v[i]);
        }
    }
    
    if (v[0]%2 != 0){
        for (i = 0; i < pos; i++){
            printf("impar[%d] = %d\n", i, v[i]);
        }
    }
}

void scanVectors (int main_vec[], int p[], int i[]){
    
    int t = 0, pos_p = 0, pos_i = 0;
    
    while (t < 15){
    
        if ((main_vec[t]%2 == 0) && (pos_p < 5)){
            p[pos_p] = main_vec[t];
            pos_p++;
        }
        
        if (pos_p == 5){
            emptyVector(p, &pos_p);
        }
    
        if ((main_vec[t]%2 != 0) && (pos_i < 5)){
            i[pos_i] = main_vec[t];
            pos_i++;
        }
        
        if (pos_i == 5){
            emptyVector(i, &pos_i);
        }
        
        t++;
    }
    
    printRest(i, pos_i);
    
    printRest(p, pos_p);
}

int main() {
    
    int t;
    int main_vec[15], p[5], i[5];
    
    for (t = 0; t < 15; t++){
        scanf("%d", &main_vec[t]);
    }
    
    scanVectors(main_vec, p, i);
 
    return 0;
}