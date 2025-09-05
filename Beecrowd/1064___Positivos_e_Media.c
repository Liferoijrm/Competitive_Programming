#include <stdio.h>
 
int main() {
    
    float a, media, stotal = 0;
    int i, total = 0;

    for (i = 0; i < 6; i++){
	    scanf("%f", &a);

        if (a > 0){
	        total++;
	        stotal+=a;
	    }
    }

    media = stotal/total;

    printf("%d valores positivos\n", total);
    printf("%.1f\n", media);

    return 0;
}