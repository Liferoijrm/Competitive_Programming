#include <stdio.h>
#include <string.h>

int verifyZero(char string[], int pos){

    int i;

    for (i = 0; i < pos; i++){
        if (string[i] != '0'){
            return 1;
        }
    }

    return 0;
}

int main(){

    int i;
    char falho;

    scanf("%c", &falho);

    while (falho != '0') {

        char string1[102]; // 10^100 eh um numero de 101 digitos
        char string2[102] = {'\0'};

        scanf(" %s", string1);
        getchar();

        int j = 0;

        for (i = 0; i < strlen(string1); i++){

            if (string1[i] != falho){
                string2[j] = string1[i];
                j++;
            }
        }

        if (strlen(string2) != 0){
            for (i = 0; i < strlen(string2); i++){

                if (string2[i] == '0'){
                    if (verifyZero(string2, i) == 1){
                        printf("%c", string2[i]);
                    }
                    else if (i == (strlen(string2)-1)){
                        printf("%c", string2[i]);
                    }
                }
                else {
                    printf("%c", string2[i]);
                }
            }
            printf("\n");
        }
        else {
            printf("0\n");
        }

        scanf("%c", &falho);
    }

    return 0;
}