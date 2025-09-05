#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){

    char array2[100];

    while (scanf(" %[^\n]", array2) != EOF){

        int i, exe = 0, upr = 0, low = 0, num = 0, count1 = 0;

        count1 = strlen(array2);

        for (i = 0; i < count1; i++){
            if (isupper(array2[i])){
                upr = 1;
            }
            else if (islower(array2[i])){
                low = 1;
            }
            else if (isdigit(array2[i])){
                num = 1;
            }
        }

        if ((count1 < 6) || (count1 > 32)){
            printf("Senha invalida.\n");
        }
        else if ((upr == 0) || (low == 0) || (num == 0)){
            printf("Senha invalida.\n");
        }
        else {

            for (i = 0; i < count1; i++){
                if (ispunct(array2[i])){
                    printf("Senha invalida.\n");
                    exe = 1;
                    break;
                }
                else if (isspace(array2[i])){
                    printf("Senha invalida.\n");
                    exe = 1;
                    break;
                }
            }

            if (exe != 1){
                printf("Senha valida.\n");
            }
        }
    }

    return 0;
}