#include <stdio.h>
#include <string.h>

int main(){

    int n, idx, i;

    scanf("%d", &n);
    getchar();

    for (idx = 0; idx < n; idx++){

        char string[102]; // 10^100 eh um numero de 101 caracteres
        int cont = 0;

        scanf("%s", string);
        getchar();

        for (i = 0; i < strlen(string); i++){
            if (string[i] == '1'){
                cont+=2;
            }
            else if (string[i] == '2' || string[i] == '3' || string[i] == '5'){
                cont+=5;
            } 
            else if (string[i] == '4'){
                cont+=4;
            }
            else if (string[i] == '6' || string[i] == '9' || string[i] == '0'){
                cont+=6;
            } 
            else if (string[i] == '7'){
                cont+=3;
            }
            else if (string[i] == '8'){
                cont+=7;
            }
        }

        printf("%d leds\n", cont);
    }

    return 0;
}