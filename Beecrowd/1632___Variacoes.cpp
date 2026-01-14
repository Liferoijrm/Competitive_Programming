#include <stdio.h>
#include <string.h>

int main() {

    int t;
    scanf("%d", &t);
    getchar();

    while (t--) {
        char str [17];
        scanf("%s", str);
        getchar();
        int len = strlen(str);
        int variations[len];

        for(int i = 0; i < len; i++){
            if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 's')
                variations[i] = 3;
            else if(str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'S')
                variations[i] = 3;
            else
                variations[i] = 2;
        }
        int answer = 1;
        for(int i = 0; i < len; i++){
            answer*=variations[i];
        }
        printf("%d\n", answer);
    }

    return 0;
}