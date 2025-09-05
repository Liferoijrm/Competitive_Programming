#include <stdio.h>
 
int main() {
 
    float N1, N2, N3, N4, M, E;
   
    scanf("%f %f %f %f", &N1, &N2, &N3, &N4);
   
    M = (2*N1 + 3*N2 + 4*N3 + N4)/10;
   
    if (M >= 7.0) {
        printf("Media: %.1f\n", M);
        printf("Aluno aprovado.\n");
    }
    else if (M < 5) {
        printf("Media: %.1f\n", M);
        printf("Aluno reprovado.\n");
    }
    else {
        printf("Media: %.1f\n", M);
        printf("Aluno em exame.\n");

        scanf("%f", &E);

        printf("Nota do exame: %.1f\n", E);

        M = (M + E)/2;

        if (M >= 5.0){
            printf("Aluno aprovado.\n");
            printf("Media final: %.1f\n", M);
        }
        else{
            printf("Aluno reprovado.\n");
            printf("Media final: %.1f\n", M);
        }
    }
   
    return 0;
}