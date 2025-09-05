#include <stdio.h>
#include <string.h>
 
int main() {

    int n, idx;

    scanf("%d", &n);

    for (idx = 0; idx < n; idx++){

        char sobrenome[43];
        int i, cont = 0;
 
        scanf("%s", sobrenome);
        getchar();

        for(i = 0; i < strlen(sobrenome); i++){
            if (sobrenome[i] == 'a' || sobrenome[i] == 'e' || sobrenome[i] == 'i' || sobrenome[i] == 'o' || sobrenome[i] == 'u' || sobrenome[i] == 'A' || sobrenome[i] == 'E' || sobrenome[i] == 'I' || sobrenome[i] == 'O' || sobrenome[i] == 'U' && cont < 3){
                cont = 0;
            }
            else{
                cont++;
            }
            if (cont >= 3){
                break;
            }
        }

        if (cont >= 3){
            printf("%s nao eh facil\n", sobrenome);
        }
        else {
            printf("%s eh facil\n", sobrenome);
        }
    }
 
    return 0;
}