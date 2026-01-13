#include <stdio.h>

void swap(int *xp, int *yp) {
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
 
int main() {
 
    int area_coberta = 200;
    int f1_inicio, f1_fim;
    int f2_inicio, f2_fim;
    int f3_inicio, f3_fim;
    
    scanf("%d %d %d", &f1_inicio, &f2_inicio, &f3_inicio);
    
    if (f1_inicio > f2_inicio) swap(&f1_inicio, &f2_inicio);
    if (f1_inicio > f3_inicio) swap(&f1_inicio, &f3_inicio);
    if (f2_inicio > f3_inicio) swap(&f2_inicio, &f3_inicio);
    
    f1_fim = f1_inicio + 200;
    f2_fim = f2_inicio + 200;
    f3_fim = f3_inicio + 200;
    
    if(f2_inicio >= f1_inicio && f2_inicio <= f1_fim)
        area_coberta+=(f2_fim - f1_fim); 
    else
        area_coberta+=200;
        
    if(f3_inicio >= f2_inicio && f3_inicio <= f2_fim)
        area_coberta+=(f3_fim - f2_fim); 
    else
        area_coberta+=200;
    
    int area_total = 60000;
    int area_aberta = area_total - (area_coberta*100);
    
    printf("%d\n", area_aberta);
 
    return 0;
}