#include <stdio.h>
 
int main() {

    int di, df, hi, hf, mi, mf, si, sf;
    int w, x, y, z, tempo_seg, ti, tf;

    scanf("Dia %d\n", &di);
    scanf("%d : %d : %d\n", &hi, &mi, &si);
    scanf("Dia %d\n", &df);
    scanf("%d : %d : %d\n", &hf, &mf, &sf);

    ti = di*86400 + hi*3600 + mi*60 + si;
    tf = df*86400 + hf*3600 + mf*60 + sf;

    tempo_seg = tf - ti;

    w = tempo_seg/86400;
    x = (tempo_seg - w*86400)/3600;
    y = (tempo_seg - w*86400 - x*3600)/60;
    z = (tempo_seg - w*86400- x*3600 - y*60);

    printf ("%d dia(s)\n", w);
    printf ("%d hora(s)\n", x);
    printf ("%d minuto(s)\n", y);
    printf ("%d segundo(s)\n", z);

    return 0;
}