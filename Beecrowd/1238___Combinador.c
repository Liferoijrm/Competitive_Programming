#include <stdio.h>
#include <string.h>
 
int main() {

    int n, idx, i;
    
    scanf("%d", &n);
    getchar();

    for (idx = 0; idx < n; idx++){

        char string1[51], string2[51];
        char stringf[101] = {'\0'};

        scanf("%s %s", string1, string2);
        getchar();

        int size = strlen(string1) + strlen(string2);
        int j = 0, k = 0;

        for (i = 0; i < size; i++){
            if (i%2 == 0 && string1[k] != '\0'){
                stringf[i] = string1[k];
                k++;
            }
            else if (i%2 != 0 && string2[j] != '\0'){
                stringf[i] = string2[j];
                j++;
            }
            else if (i%2 == 0 && string1[k] == '\0' && string2[j] != '\0'){
                stringf[i] = string2[j];
                j++;
            }
            else if (i%2 != 0 && string1[k] != '\0'&& string2[j] == '\0'){
                stringf[i] = string1[k];
                k++;
            }
        }

        printf("%s\n", stringf);
    }

    return 0;
}