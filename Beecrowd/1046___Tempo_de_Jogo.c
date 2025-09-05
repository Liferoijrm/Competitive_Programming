#include <stdio.h>
 
int main() {
 
    int I, F, d;
 
    scanf("%d %d", &I, &F);
 
    if (I > F){
        d = 24 - I + F;
        printf("O JOGO DUROU %d HORA(S)\n", d);
    }
    else if (F > I){
        d = F - I;
        printf("O JOGO DUROU %d HORA(S)\n", d);
    }
    else if (I == F){
        printf("O JOGO DUROU 24 HORA(S)\n");
    }
 
    return 0;
}