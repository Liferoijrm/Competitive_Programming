#include <stdio.h>
 
int main() {
 
    char tipo [30], filo [30], diet [30];
    
    scanf("%s", tipo);
    scanf("%s", filo);
    scanf("%s", diet);
    
    
    if (tipo [0] == 'v'){

        if (filo [0] == 'a'){ 
            if (diet [0] == 'c'){
                printf("aguia\n");
            }
            else if (diet [0] == 'o'){
                printf("pomba\n");
            }
        }
        else if (filo [0] == 'm'){
            if (diet [0] == 'h'){
                printf("vaca\n");
            }
            else if (diet [0] == 'o'){
                printf("homem\n");
            }
        }
    }
    else if (tipo [0] == 'i'){
        if (filo [0] == 'i'){
            if (diet [2] == 'm'){
                printf("pulga\n");
            }
            else if (diet [2] == 'r'){
                printf("lagarta\n");
            }
        }
        else if (filo [0] == 'a'){
            if (diet [0] == 'h'){
                printf("sanguessuga\n");
            }
            else if (diet [0] == 'o'){
                printf("minhoca\n");
            }
        }
    }

    return 0;
}