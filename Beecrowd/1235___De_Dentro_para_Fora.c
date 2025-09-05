#include <stdio.h>
#include <string.h>
 
int main() {
 
    int n, i, idx, size;
    
    scanf("%d", &n);
    getchar();
    
    for (idx = 0; idx < n; idx++){

        char string[101];
        
        char string1[51] = {'\0'}, string2[51] = {'\0'}; // adiciona = {'\0'} para resetar as strings a cada iteracao

        scanf("%[^\n]", string);
        getchar();
        
        size = strlen(string) / 2;
                                                                    
        for (i = 0; i < size; i++){
            string1[i] = string[size - 1 - i];
            string2[i] = string[2*size - 1 - i];
        }
        
        printf("%s%s\n", string1, string2);
    }
 
    return 0;
}