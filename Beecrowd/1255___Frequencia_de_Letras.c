#include <stdio.h>
#include <string.h>

typedef struct{
    char valor;
    int freq;
} info;
 
int main() {
    
    int n, i, j;
    info num[129];
    char temp[1001];
    
    scanf("%d", &n);
    getchar();

    for (i = 0; i < n; i++){
        
        scanf("%[^\n]", temp);
        getchar();
        
        int k = 1, size = strlen(temp);

        for (j = 0; j < 128; j++){
            num[j].valor = j;
            num[j].freq = 0;
        }  

        for (j = 0; j < size; j++){
            
            if (temp[j] >= 'A' && temp[j] <= 'Z'){
                num[temp[j] + 32].freq++;
            }
            else {
                num[temp[j]].freq++;
            }
        }
        
        for (j = 97; j < 123; j++){
            if (num[j].freq > k){
                k = num[j].freq;
            }
        }

        for (j = 97; j < 123; j++){
            if (num[j].freq == k){
                printf("%c", num[j].valor);
            }
        }

        printf("\n");
    }

    return 0;
}