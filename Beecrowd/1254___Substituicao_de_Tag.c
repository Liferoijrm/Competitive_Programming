#include <stdio.h>
#include <string.h>

int main(){

    char substituido[11];
    char substituto[5];
    char frase[51];
    int i;

    while (scanf("%s", substituido) != EOF){
        getchar();

        for (i = 0; i < strlen(substituido); i++){
            if (substituido[i] < 'a'){
                substituido[i]+=32; // se for maiuscula, transforma em minuscula
            }
        }

        scanf("%s", substituto);
        getchar();

        scanf("%[^\n]", frase);
        getchar();

        int busca = 0, j;

        for (i = 0; i < strlen(frase); i++){
            if (frase[i] == '<' && busca == 0){
                busca = 1;
                printf("%c", frase[i]);
            }
            else if ((frase[i] == substituido[0] || frase[i] == (substituido[0]-32)) && busca == 1){

                int k = i + 1;

                for (j = 1; j < strlen(substituido); j++){

                    if (substituido[j] == frase[k] || (substituido[j]-32) == frase[k]){
                        if (j == (strlen(substituido)-1)){
                            printf("%s", substituto);
                            i+=(strlen(substituido)-1);
                        }
                        else {
                            k++;
                        }
                    }
                    else {
                        printf("%c", frase[i]);
                        break;
                    }
                }

                if (strlen(substituido) == 1){
                    printf("%s", substituto);
                }
            }
            else if (frase[i] == '>' && busca == 1){
                busca = 0;
                printf("%c", frase[i]);
            }
            else {
                printf("%c", frase[i]);
            }
        }

        printf("\n");
    }

    return 0;
}