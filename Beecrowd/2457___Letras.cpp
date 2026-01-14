#include <stdio.h>
#include <string.h>

int has_letter(char palavra[], char letra){
    for(int i = 0; i < strlen(palavra); i++){
        if(palavra[i] == letra) return 1;
    }
    return 0;
}
 
int main() {
 
    char letra;
    char aux[1001];
    char palavras[1001][1001];
    
    scanf("%c", &letra);
    getchar();
    
    int j = 0;
    while (1) {
        scanf("%s", aux);
        strcpy(palavras[j], aux);
        j++;

        char c = getchar();   
        if (c == '\n') {
            break;
        }
    }
    int count = 0;
    for(int i = 0; i < j; i++){
        if(has_letter(palavras[i], letra)){
            count++;
        }
    }
    
    printf("%.1f\n", (float)count*100/j);
 
    return 0;
}