#include <stdio.h>
 
int main() {
 
    int p, a, u;
    
    scanf("%d %d %d", &p, &a, &u);
    
    if ((p > a) && (a > u)){
        printf("%d\n", u);
        printf("%d\n", a);
        printf("%d\n", p);
        printf("\n");
        printf("%d\n", p);
        printf("%d\n", a);
        printf("%d\n", u);
    }
     else if ((p > u) && (u > a)) {
        printf("%d\n", a);
        printf("%d\n", u);
        printf("%d\n", p);
        printf("\n");
        printf("%d\n", p);
        printf("%d\n", a);
        printf("%d\n", u);
    }
     else if ((a > p) && (p > u)) {
        printf("%d\n", u);
        printf("%d\n", p);
        printf("%d\n", a);
        printf("\n");
        printf("%d\n", p);
        printf("%d\n", a);
        printf("%d\n", u);
    }
     else if ((u > a) && (a > p)) {
        printf("%d\n", p);
        printf("%d\n", a);
        printf("%d\n", u);
        printf("\n");
        printf("%d\n", p);
        printf("%d\n", a);
        printf("%d\n", u);
    }
     else if ((u > p) && (p > a)) {
        printf("%d\n", a);
        printf("%d\n", p);
        printf("%d\n", u);
        printf("\n");
        printf("%d\n", p);
        printf("%d\n", a);
        printf("%d\n", u);
    }
     else if ((a > u) && (u > p)) {
        printf("%d\n", p);
        printf("%d\n", u);
        printf("%d\n", a);
        printf("\n");
        printf("%d\n", p);
        printf("%d\n", a);
        printf("%d\n", u);
    } 
    
    return 0;
}