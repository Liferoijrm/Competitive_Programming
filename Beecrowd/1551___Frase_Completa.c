#include <stdio.h>
#include <string.h>

int main() {
    
    int n, i, i2, size;
    
    scanf("%d", &n);
    getchar();
    
    for (i = 0; i < n; i++){
        
        char string[1001];
        char a = 'a';
        int cont = 0, exe = 0;
    
        scanf("%[^\n]", string);
        getchar();
        
        size = strlen(string);
        
        for (i2 = 0; i2 < size; i2++){

            exe = 0;

            if (string[i2] == a){
                a++;
                cont++;
                exe = 1;
                
                if (a <= ('z'+1)){
                    i2 = 0;
                }
            }

            if (i2 == (size - 1) && exe == 0 && a < ('z'+1)){
                a++;
                i2 = 0;
            }
        }
        
        if (cont == 26){
            printf("frase completa\n");
        }
        else if (cont >= 13){
            printf("frase quase completa\n");
        }
        else{
            printf("frase mal elaborada\n");
        }
    }
 
    return 0;
}