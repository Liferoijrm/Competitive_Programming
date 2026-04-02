#include <bits/stdc++.h>
 
int main() {
    
    int n;
    scanf("%d", &n);
    while(n != 0){
        int maria = 0, jose = 0;
        for(int i = 0; i < n; i++){
            int a;
            scanf("%d", &a);
            if(a)
                jose++;
            else
                maria++;
        }
        printf("Mary won %d times and John won %d times\n", maria, jose);
        scanf("%d", &n);
    }
 
    return 0;
}