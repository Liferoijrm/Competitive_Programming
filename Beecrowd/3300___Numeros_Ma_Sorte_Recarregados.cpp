#include <stdio.h>
#include <string.h>

int main() {
        
    char str [102];
    scanf("%s", str);
    getchar();

    for(int i = 0; i < strlen(str)-1; i++){
        if(str[i] == '1' && str[i+1] == '3'){
            printf("%s es de Mala Suerte\n", str);
            return 0;
        }
    }
    printf("%s NO es de Mala Suerte\n", str);

    return 0;
}