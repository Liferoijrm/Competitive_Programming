#include <stdio.h>
#include <string.h>
 
int main() {
 
    char str1[21], str2[21];
    scanf("%s", str1);
    getchar();
    scanf("%s", str2);
    getchar();
    
    if (strcmp(str1, str2) > 0) {
        printf("%s\n", str2);
        printf("%s\n", str1);
    } else {
        printf("%s\n", str1);
        printf("%s\n", str2);
    }
 
    return 0;
}