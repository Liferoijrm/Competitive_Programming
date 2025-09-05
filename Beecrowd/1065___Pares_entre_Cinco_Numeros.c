#include <stdio.h>
 
int main() {
 
    int i, a, total = 0;

    for (i = 0; i < 5; i++){
	    scanf("%d", &a);

        if ((a%2) == 0){
	        total++;
	    }
    }

    printf("%d valores pares\n", total);
 
    return 0;
}