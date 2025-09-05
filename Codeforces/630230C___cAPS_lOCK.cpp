#include <stdio.h> 
#include <string.h>
 
int main(){
 
    int count = 0, wrong = 0;
    char string[101];
 
    scanf("%s", string);
 
    int len = strlen(string);
 
    for(int i = (len-1); i > 0; i--){
        if ('A' <= string[i] && 'Z' >= string[i]){
            count++;
        }
    }
 
    if (count == (len-1)){
        wrong = 1;
    }
 
    if (wrong){
        for(int i = 0; i < len; i++){
            if ('A' <= string[i] && 'Z' >= string[i]){
                printf("%c", (string[i]+32));
            }
            else{
                printf("%c", (string[i]-32));
            }
        }  
        printf("\n"); 
    }
    else{
        printf("%s\n", string);
    }
 
    return 0;
}