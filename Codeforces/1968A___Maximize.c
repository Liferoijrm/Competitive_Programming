#include <stdio.h>

int gcd(int a, int b){
    if (b == 0) return a;
    return gcd(b, a % b);
}

int main(){
    int idx, n;
    scanf("%d", &n);
    for (idx = 0; idx <n; idx++){

        int x;
        scanf("%d", &x);

        int max = gcd(x, 1) + 1, ans = 1;
        for (int i = 2; i < x; i++){
            if ((gcd(x, i) + i) >= max){
                max = gcd(x, i) + i;
                ans = i;
            }
        }

        printf("%d\n", ans);
    }
    
    return 0;
}