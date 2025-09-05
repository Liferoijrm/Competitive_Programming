#include <stdio.h>
 
int main() {
 
    float a;
    int i, total = 0;

    for (i = 0; i < 6; i++){
	    scanf("%f", &a);

        if (a > 0){
	        total++;
	    }
    }

    printf("%d valores positivos\n", total);
 
    return 0;
}