#include <stdio.h>
 
int main() {

    int classes, idx;
    
    scanf("%d", &classes);

    for (idx = 0; idx < classes; idx++){

        int n, min, count = 0, i;

        scanf("%d %d", &n, &min);

        int time[n];

        for (i = 0; i < n; i++){
            scanf("%d", &time[i]);

            if (time[i] <= 0){
                count++;
            }
        }

        if (count < min){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }

    return 0;
}