#include <stdio.h>
 
int main() {
 
    int i;
    int a; 
    int totalp = 0, totali = 0, totalpos = 0, totalneg = 0;

    for (i = 0; i < 5; i++){
	    scanf("%d", &a);

        if ((a%2) == 0){
	        if (a > 0){
	            totalp++;
	            totalpos++;
	        }
	        else if (a < 0){
	            totalp++;
	            totalneg++;
	        }
	        else {
	            totalp++;
	        }
	    }
	    else if ((a%2) != 0){
	        if (a > 0){
	            totali++;
	            totalpos++;
	        }
	        else if (a < 0){
	            totali++;
	            totalneg++;
	        }
	    }
    }

    printf("%d valor(es) par(es)\n", totalp);
    printf("%d valor(es) impar(es)\n", totali);
    printf("%d valor(es) positivo(s)\n", totalpos);
    printf("%d valor(es) negativo(s)\n", totalneg);
 
    return 0;
}