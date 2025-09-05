#include <stdio.h>

void scanVector(int v[], int n){

    int i;

    for (i = 0; i < n; i++){
        scanf("%d", &v[i]);
    }
}

double vectorMedia(int trabalhos[], int n){

    int i;
    long long int soma = 0;
    double media;

    for (i = 0; i < n; i++){
        soma+=trabalhos[i];
    }

    media = soma/2.0;

    return media;
}

int verifyOptimal(int trabalhos[], double media, int n){

    long long int uppersoma = 0, bottomsoma;
    int optimal, i = 0;

    while ((uppersoma <= media) && (i < n)){
        uppersoma+=trabalhos[i];
        i++;
    }

    bottomsoma = uppersoma - trabalhos[i-1];

    if ((uppersoma - media) >= (media - bottomsoma)){
        optimal = (int)((media - bottomsoma)*2);
    }

    else {
        optimal = (int)((uppersoma - media)*2);
    }

    return optimal;
}
 
int main() {

    int n;
    double media;

    while (scanf("%d", &n) != EOF){

        int trabalhos[n];

        scanVector(trabalhos, n);

        media = vectorMedia(trabalhos, n);

        printf("%d\n", verifyOptimal(trabalhos, media, n));
    }
 
    return 0;
}