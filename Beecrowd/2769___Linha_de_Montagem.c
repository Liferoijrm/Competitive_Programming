#include <stdio.h> // essa solução não é minha, está aqui puramente para fins de aprendizado
#include <limits.h>

#define MAX_N 1000

int N;
int e1, e2, x1, x2;
int a1[MAX_N], a2[MAX_N];
int t1[MAX_N - 1], t2[MAX_N - 1];
int memo1[MAX_N], memo2[MAX_N];  // Arrays para memoização

// Função recursiva para calcular o tempo mínimo para chegar na etapa i pela linha 1
int f1(int i) {
    if (i == 0)
        return e1 + a1[0];
    if (memo1[i] != -1)
        return memo1[i];

    int stay = f1(i - 1) + a1[i];
    int switch_line = f2(i - 1) + t2[i - 1] + a1[i];

    memo1[i] = stay < switch_line ? stay : switch_line;
    return memo1[i];
}

// Função recursiva para calcular o tempo mínimo para chegar na etapa i pela linha 2
int f2(int i) {
    if (i == 0)
        return e2 + a2[0];
    if (memo2[i] != -1)
        return memo2[i];

    int stay = f2(i - 1) + a2[i];
    int switch_line = f1(i - 1) + t1[i - 1] + a2[i];

    memo2[i] = stay < switch_line ? stay : switch_line;
    return memo2[i];
}

int main() {
    while (scanf("%d", &N) != EOF) {
        // Leitura das entradas
        scanf("%d %d", &e1, &e2);
        for (int i = 0; i < N; i++) {
            scanf("%d", &a1[i]);
        }
        for (int i = 0; i < N; i++) {
            scanf("%d", &a2[i]);
        }
        for (int i = 0; i < N - 1; i++) {
            scanf("%d", &t1[i]);
        }
        for (int i = 0; i < N - 1; i++) {
            scanf("%d", &t2[i]);
        }
        scanf("%d %d", &x1, &x2);

        // Inicializa a memoização com -1 (indica que ainda não foi calculado)
        for (int i = 0; i < N; i++) {
            memo1[i] = -1;
            memo2[i] = -1;
        }

        // Calcula o menor tempo final usando as funções recursivas
        int final_time_1 = f1(N - 1) + x1;
        int final_time_2 = f2(N - 1) + x2;

        int result = final_time_1 < final_time_2 ? final_time_1 : final_time_2;
        printf("%d\n", result);
    }

    return 0;
}