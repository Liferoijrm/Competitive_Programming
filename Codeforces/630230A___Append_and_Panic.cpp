#include <stdio.h> 
#include <string.h>
 
int main(){
 
    int count = 1;
    char string[2001];
 
    scanf("%s", string);
 
    int len = strlen(string);
 
    for(int i = (len-1); i > 0; i--){
        if (string[i] <= string[i-1]){
            break;
        }
        count++;
    }
 
    printf("%d\n", (len-count));
 
    return 0;
}