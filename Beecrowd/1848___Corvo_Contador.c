#include <stdio.h>
 
int main() {
 
    int i;
    
    for (i = 0; i < 3; i++){
        
        char string[8];
        int cont = 0;

        scanf("%[^\n]", string);
        getchar();

        while (string[0] != 'c'){

            if (string[0] == '*'){
                cont+=4;
            }
            if (string[1] == '*'){
                cont+=2;
            }
            if (string[2] == '*'){
                cont+=1;
            }
            
            scanf("%[^\n]", string);
            getchar();
        }

        printf("%d\n", cont);
    }

    return 0;
}