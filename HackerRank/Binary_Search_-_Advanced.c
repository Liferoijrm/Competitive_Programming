#include <stdio.h>
 
int main() {

    int n, i, key;
    int first, last, count;
    int foundf = 0, foundl = 0;
    
    scanf("%d", &n);

    int array[n];
    int low = 0, high = (n-1);

    for (i = 0; i < n; i++){
        scanf("%d", &array[i]);
    }

    scanf("%d", &key);

    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (array[mid] == key && array[mid-1] != key){
            first = mid;
            foundf = 1;
            break;
        }
        else if (array[mid] < key){
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    low = 0, high = (n-1);

    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (array[mid] == key && array[mid+1] != key){
            last = mid;
            foundl = 1;
            break;
        }
        else if (array[mid] <= key){
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    count = 1 + (last-first);

    if (foundf == 0){
        first = -1;
    }
    if (foundl == 0){
        last = -1;
    }
    if (first == -1 && last == -1){
        count = 0;
    }

    printf("%d %d %d\n", first, last, count);

    return 0;
}