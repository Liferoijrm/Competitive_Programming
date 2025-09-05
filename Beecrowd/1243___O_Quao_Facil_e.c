#include <stdio.h>
#include <string.h>

typedef struct{
    char palavra[51];
    int invalid;
    int size;
} info;
 
int main() {
    
    char temp[51];
    int i, j, k;
    info array[50];

    while (scanf("%[^\n]", temp) != EOF){
        getchar(); // LEMBRA DE COLOCAR O GETCHAR!!!!!!!

        int letras = 0, palavras = 0;
        
        // Lembre-se de reinicializar o struct a cada iteracao
        
        for (i = 0; i < 50; i++){ 
            for (j = 0; j < 51; j++){
                array[i].palavra[j] = '\0';
            }
            array[i].invalid = 0;
            array[i].size = 0;
        }

        i = 0, j = 0, k = 0;
        
        // scan de um numero indeterminado de palavras para dentro de um vetor de struct

        while (temp[i] != '\0'){

            if (temp[i] != ' '){
                array[j].palavra[k] = temp[i];
                k++;
            }

            else if (temp[i] == ' '){
                array[j].size = strlen(array[j].palavra);
                if (array[j].size == 0){
                    array[j].palavra[0] = ' '; // se a palavra tiver tamanho 0, entao a posicao 0 da palavra recebe ' ' em vez de '\0'
                }
                j++;
                k = 0;
            }

            i++;
        }
        
        // essa ultima secao eh necessaria para preencher os dados de palavras nao sucedidas por espaco (' ')

        array[j].size = strlen(array[j].palavra);
        if (array[j].size == 0){
            array[j].palavra[0] = ' ';
        }
        
        // fim do scan

        i = 0, j = 0, k = 0;

        while (array[i].palavra[0] != '\0'){ //se ele encontrar um nome nao inicializado, quer dizer que as palavras a serem analisadas acabaram

            if (array[i].size != 0){ 
                for (j = 0; j < array[i].size; j++){

                    if (array[i].palavra[j] < 'A' || array[i].palavra[j] > 'Z' && array[i].palavra[j] < 'a' || array[i].palavra[j] > 'z'){
                        if (!(array[i].palavra[j] == '.' && j == (strlen(array[i].palavra) - 1))){ // a string eh invalida se contiver um caracter diferente de letras e se esse caracter nao for um '.' na ultima posicao da string
                            array[i].invalid = 1;
                        }
                    }
                }
            }
            else {
                array[i].invalid = 1;
            }

            i++;
        }

        i = 0, j = 0, k = 0;

        while (array[i].palavra[0] != '\0'){

            if (array[i].invalid != 1){
                palavras++;
                letras+=array[i].size;
                if (array[i].palavra[array[i].size - 1] == '.'){ // se a palavra for valida e contiver um '.', ele reduz a contagem de letras
                    letras--;
                    if ((array[i].size) == 1){ // se a palavra for somente '.', reduz a contagem de palavras
                        palavras--;
                    }
                }
            }

            i++;
        }

        if (palavras == 0) printf("250\n");
        else if (letras/palavras <= 3) printf("250\n");
        else if (letras/palavras == 4) printf("500\n");
        else if (letras/palavras == 5) printf("500\n");
        else if (letras/palavras >= 6) printf("1000\n");
    }
 
    return 0;
}