#include <stdio.h>
#include <string.h>

int main() {
    
    int n, i, i2, size;
    
    scanf("%d", &n);
    getchar();
    
    for (i = 0; i < n; i++){
        
        char string[101];
        int fail = 0;
    
        scanf("%[^\n]", string);
        getchar();
        
        size = strlen(string);

        if (size != 8){
            fail = 1;
        }
        
        else {
            if (string[0] < 'A' || string[0] > 'Z'){
                fail = 1;
            }
            else if (string[1] < 'A' || string[1] > 'Z'){
                fail = 1;
            }
            else if (string[2] < 'A' || string[2] > 'Z'){
                fail = 1;
            }
            else if (string[3] != '-'){
                fail = 1;
            }
            else if (string[4] < '0' || string[4] > '9'){
                fail = 1;
            }
            else if (string[5] < '0' || string[5] > '9'){
                fail = 1;
            }
            else if (string[6] < '0' || string[6] > '9'){
                fail = 1;
            }
            else if (string[7] < '0' || string[7] > '9'){
                fail = 1;
            }
        }
        
        if (fail == 1){
            printf("FAILURE\n");
        }
        else if (string[7] == '1' || string[7] == '2'){
            printf("MONDAY\n");
        }
        else if (string[7] == '3' || string[7] == '4'){
            printf("TUESDAY\n");
        }
        else if (string[7] == '5' || string[7] == '6'){
            printf("WEDNESDAY\n");
        }
        else if (string[7] == '7' || string[7] == '8'){
            printf("THURSDAY\n");
        }
        else if (string[7] == '9' || string[7] == '0'){
            printf("FRIDAY\n");
        }
    }
 
    return 0;
}