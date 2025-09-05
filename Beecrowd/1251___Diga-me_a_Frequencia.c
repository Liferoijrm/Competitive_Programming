#include <stdio.h>
#include <string.h>

typedef struct{
    char valor;
    int freq;
} info;
 
int main() {
    
    int i, first = 0;
    info num[129];
    char temp[1001];

    while (scanf("%[^\n]", temp) != EOF){

        getchar();
        
        int k = 1, size = strlen(temp);
        
        if (first != 0){
            printf("\n");
        }
        else {
            first = 1;
        }

        for (i = 0; i < 128; i++){
            num[i].valor = i;
            num[i].freq = 0;
        }  

        for (i = 0; i < size; i++){
            num[temp[i]].freq++;
        }

        for (i = 128; i >= 0; i--){
            if (num[i].freq == k){
                printf("%d %d\n", num[i].valor, num[i].freq);
            }
            else if (i == 0){
                k++;
                if (k < 128) i = 128;
                else i = -1;
            }
        }
    }

    return 0;
}