#include <stdio.h>
#include <string.h>
 
int main() {

    int wrd_count = 1, i;
    char string[100001];

    scanf("%s", string);

    for (i = 0; i < strlen(string); i++){
        if (string[i] >= 'A' && string[i] <= 'Z'){
            wrd_count++;
        }
    }

    printf("%d\n", wrd_count);

    return 0;
}