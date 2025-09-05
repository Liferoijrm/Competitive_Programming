#include <stdio.h>
#include <string.h>

int main() {
    
    int n, idx, i, size;

    scanf("%d", &n);
    getchar();

    char string[1001];
    
    while (n != 0){
    
        for (idx = 0; idx < n; idx++){

            int contp = 0, conti = 0, somap = 0, somai = 0, resto;

            scanf("%s", string);
            getchar();

            for (i = 0; i < strlen(string); i++){
                if (i%2 == 0){
                    contp+=(string[i] - '0'); // o formato (string[i] - '0') faz com que '1', por exemplo, tenha realmente valor 1 e nao o valor da tabela ASCII 
                }
                else {
                    conti+=(string[i] - '0');
                }
            }

            if (contp > 9){ // se contp tiver mais de 1 digito, soma os digitos
                while (contp != 0){
                    resto = contp%10;
                    somap+=resto;
                    contp = contp/10;
                }
                contp = somap;
            }

            if (conti > 9){ // se conti tiver mais de 1 digito, soma os digitos
                while (conti != 0){
                    resto = conti%10;
                    somai+=resto;
                    conti = conti/10;
                }
                conti = somai;
            }

            int total = contp + conti;

            printf("%d\n", total);
        }

        scanf("%d", &n);
        getchar();
    }
  
    return 0;
}