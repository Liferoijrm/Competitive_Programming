#include <stdio.h>
 
int main() {
 
    int t, th, tm, ts;
    
    scanf("%d", &t);
    
    th = t/3600.0;
    tm = (t - th*3600)/60.0;
    ts = (t - th*3600 - tm*60);
    
    printf("%d:%d:%d\n", th, tm, ts);
    
    return 0;
}