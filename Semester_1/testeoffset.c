#include <stdio.h>

FILE* fd;
char nickname[21], arquivo[21] = "iniciante.txt";
int modo = 1, tamanho_matriz = 4;
int fase_iniciante = 1, fase_intermediario = 1, fase_avancado = 1, fases_completas = 0;
char matriz[7][7], matriz_espelho[7][7];
char somatorio_lin[15], somatorio_col[15];

void scanMatrix(){

    int i, j;

    for(i = 0; i < tamanho_matriz; i++){
        fscanf(fd, "%s", matriz[i]);
        fgetc(fd);
    }
}

void scanSomatorios(){
    fscanf(fd, "%s", somatorio_col);
    fgetc(fd);
    fscanf(fd, "%s", somatorio_lin);
    fgetc(fd);
}

void scanMirrorMatrix(){

    int i, j;

    for(i = 0; i < tamanho_matriz; i++){
        fscanf(fd, "%s", matriz_espelho[i]);
        fgetc(fd);
    }
}

void printMatrix(){
    int i, j;

    for(i = 0; i < tamanho_matriz; i++){
        for (j = 0; j < tamanho_matriz; j++){
            printf("%c ", matriz[i][j]);
            if (j == 3){
                printf("\n");
            }
        }
    }
}

int main(){

    char asterisco = ' ';
    int pos = 0;
    fd = fopen("iniciante.txt", "rb");

    scanMatrix();
    scanSomatorios();
    scanMirrorMatrix();
    fscanf(fd, "%c", &asterisco);
    fgetc(fd);

    pos = ftell(fd);

    printf("%d %c\n\n", pos, asterisco);

    printMatrix();

    scanMatrix();
    scanSomatorios();
    scanMirrorMatrix();
    fscanf(fd, "%c", &asterisco);
    fgetc(fd);

    pos = ftell(fd);

    printf("%d %c\n\n", pos, asterisco);

    printMatrix();

    scanMatrix();
    scanSomatorios();
    scanMirrorMatrix();
    fscanf(fd, "%c", &asterisco);
    fgetc(fd);

    pos = ftell(fd);

    printf("%d %c\n\n", pos, asterisco);

    printMatrix();

    scanMatrix();
    scanSomatorios();
    scanMirrorMatrix();
    fscanf(fd, "%c", &asterisco);
    fgetc(fd);

    pos = ftell(fd);

    printf("%d %c\n\n", pos, asterisco);

    printMatrix();

    return 0;
}