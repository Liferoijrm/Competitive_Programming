#include <stdio.h>
 
int main() {
 
    int ptsc, ptsf, cv, ce, cs, fv, fe, fs;
    
    scanf("%d %d %d %d %d %d", &cv, &ce, &cs, &fv, &fe, &fs);
    
    ptsc = cv*3 + ce;
    ptsf = fv*3 + fe;
    
    if (ptsc > ptsf){
        printf("C\n");
    }
    else if (ptsf > ptsc){
        printf("F\n");
    }
    else if (cs > fs){
        printf("C\n");
    }
    else if (fs > cs){
        printf("F\n");
    }
    else{
        printf("=\n");
    }
 
    return 0;
}