#include <stdio.h>
#include <string.h>

typedef struct{
    int val;
    char carne[21];
} info;
 
int main() {
    
    int i, n, temp_v;
    info num[51];
    char temp_c[21];

    while (scanf("%d", &n) != EOF){

        getchar();

        for (i = 0; i < 51; i++){
            num[i].val = -1;
        }

        for (i = 0; i < n; i++){

            scanf("%s %d", temp_c, &temp_v);
            getchar();

            strcpy(num[temp_v].carne, temp_c);
            num[temp_v].val = temp_v;
        }

        int space = 1;
        
        for (i = 0; i < 51; i++){
            if (num[i].val != -1){
                printf("%s", num[i].carne);
                if (space < n){
                    printf(" ");
                    space++;
                }
                else if (space == n){
                    printf("\n");
                    space++;
                }
            }
        }
    }

    return 0;
}