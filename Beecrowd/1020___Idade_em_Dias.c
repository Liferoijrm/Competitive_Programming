#include <stdio.h>
 
int main() {
 
    int t, th, tm, ts;
    
    scanf("%d", &t);
    
    th = t/365.0;
    tm = (t - th*365)/30.0;
    ts = (t - th*365 - tm*30);
    
    printf("%d ano(s)\n", th);
    printf("%d mes(es)\n", tm);
    printf("%d dia(s)\n", ts);
    
    return 0;
}