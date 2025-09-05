#include <stdio.h>
#include <string.h>

int main(){

    int n, idx;
    int i;

    scanf("%d", &n);
    getchar();

    for (idx = 0; idx < n; idx++){

        char string[10001];
        char string2[10001] = {'\0'};

        scanf("%[^\n]", string);
        getchar();

        int size = strlen(string);

        for (i = 0; i < size; i++){

            if (string[i] >= 'A' && string[i] <= 'Z' || string[i] >= 'a' && string[i] <= 'z'){
                string[i]+=3;
            }
        }

        for (i = 0; i < size; i++){
            string2[i] = string[(size-1) - i];
        }

        for (i = (size/2.0); i < size; i++){
                string2[i]--;
        }

        printf("%s\n", string2);
    }

    return 0;
}