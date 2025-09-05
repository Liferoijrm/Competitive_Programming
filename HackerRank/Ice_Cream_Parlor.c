#include <stdio.h>
#include <string.h>

void findFlavors(int flavors[], int n, int money){

    int i, j;

    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            if (i != j){
                if ((flavors[i] + flavors[j]) == money){
                    if (i < j){
                        printf("%d %d\n", (i+1), (j+1));
                        return;
                    }
                    else {
                        printf("%d %d\n", (j+1), (i+1));
                        return;
                    }
                }
            }
        }
    }
}
 
int main() {

    int trips, idx;
    
    scanf("%d", &trips);

    for (idx = 0; idx < trips; idx++){

        int money, n, i;

        scanf("%d", &money);
        scanf("%d", &n);

        int flavors[n];

        for (i = 0; i < n; i++){
            scanf("%d", &flavors[i]);
        }

        findFlavors(flavors, n, money);
    }

    return 0;
}