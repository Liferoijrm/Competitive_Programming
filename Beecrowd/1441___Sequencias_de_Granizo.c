#include <stdio.h>

int retBigger (int seq[], int len){

    int max = seq[0];

    for (int i = 1; i < len; i++) {

        if (seq[i-1]%2 == 0){
            seq[i] = seq[i-1]/2;
        }
        else{
            seq[i] = seq[i-1]*3 + 1;
        }
        if (seq[i] > max) {
            max = seq[i];
        }
         if (seq[i] == 1) {
            break;
        }
    }

    return max;
}
 
int main() {
 
    int n, i, start, biggest, seq[100000] = {1};
    
    while (scanf("%d", &start) && start != 0){

        seq[0] = start;
        
        if (start != 1){
            biggest = retBigger(seq, 100000);

            printf("%d\n", biggest);
        }
        else {
            printf("%d\n", start);
        }
    }
 
    return 0;
}