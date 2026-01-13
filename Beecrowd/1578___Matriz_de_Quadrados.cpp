#include <stdio.h>
#include <math.h>

int digits(unsigned long long int n){
    if(n == 0) return 1;
    int count = 0;
    while(n > 0){
        n/=10;
        count++;
    }
    return count;
}
 
int main() {
    
    int exercise = 4;
    unsigned long long int t;
    scanf("%llu", &t);

    while(t--){
        unsigned long long int n;
        scanf("%llu", &n);

        unsigned long long int mat[n][n];
        unsigned long long int biggest_collum_number[n];

        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                scanf("%llu", &mat[i][j]);
                mat[i][j]*=mat[i][j];
            }
        }

        printf("Quadrado da matriz #%d:\n", exercise);

        for(int j = 0; j < n; j++){
            biggest_collum_number[j] = 0;
            for(int i = 0; i < n; i++){
                if(mat[i][j] > biggest_collum_number[j])
                    biggest_collum_number[j] = mat[i][j];
            }
        }

        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                for(int k = 0; k < (digits(biggest_collum_number[j]) - digits(mat[i][j])); k++){
                    printf(" ");
                }
                j != (n-1)? printf("%llu ", mat[i][j]) : printf("%llu", mat[i][j]);
            }
            printf("\n");
        }
        if(t != 0) printf("\n");

        exercise++;
    }

    return 0;
}