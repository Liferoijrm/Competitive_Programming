#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct{
    char word[6];
}info;

int compare (const void* a, const void* b){
    const info* sA = (const info*)a;
    const info* sB = (const info*)b;
    
    return strcmp(sA->word, sB->word);
}

int isSubSet(info mag[], int n, info note[], int m){

    int i;

    for (i = 0; i < m; i++){

        int j = 0, flag = 0;

        while (j < n){
            if (strcmp(note[i].word, mag[j].word) == 0){
                mag[j].word[0] = '\0';
                flag = 1;
                break;
            }
            else {
                j++;
            }
        }

        if (flag == 0){
            return 0;
        }
    }

    return 1;
}
 
int main() {

    int n, i, m;
    
    scanf("%d %d", &n, &m);
    getchar();

    info mag[n], note[m];

    for (i = 0; i < n; i++){
        scanf("%s", mag[i].word);
    }
    getchar();

    for (i = 0; i < m; i++){
        scanf("%s", note[i].word);
    }
    getchar();

    qsort(mag, n, sizeof(info), compare);
    qsort(note, m, sizeof(info), compare);

    if (isSubSet(mag, n, note, m)){
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }

    return 0;
}