#include <stdio.h>
#include <string.h>
 
int main() {

    char sentence[51];
    int i;
 
    while (scanf("%[^\n]", sentence) != EOF){
        getchar();

        int cont = 0;

        for (i = 0; i < strlen(sentence); i++){
            if (sentence[i] >= 'a' && sentence[i] <= 'z' && (cont%2) == 0){
                sentence[i]-=32;
            }
            else if (sentence[i] >= 'A' && sentence[i] <= 'Z' && (cont%2) != 0){
                sentence[i]+=32;
            }
            else if (sentence[i] == ' '){
                cont--;
            }
            cont++;
        }

        printf("%s\n", sentence);
    }
 
    return 0;
}