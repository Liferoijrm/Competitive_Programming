#include <stdio.h>
 
int main() {
 
    int n, i, i2, j, idx;
    int money, n_price, n_cake, n_ingr;

    scanf("%d", &n);

    for (idx = 0; idx < n; idx++){

        scanf("%d %d %d", &money, &n_price, &n_cake);

        int prices[n_price], qtdbolos = 0, resp = 0;
        int qtdingr[100], index[100];

        for (i = 0; i < n_price; i++){
            scanf("%d", &prices[i]);
        }

        for (i2 = 0; i2 < n_cake; i2++){

            scanf("%d", &n_ingr);

            for (j = 0; j < n_ingr; j++){
                scanf("%d %d", &index[j], &qtdingr[j]);
            }

            int price = 0;

            while (money >= price){

                for (j = 0; j < n_ingr; j++){
                    price+=prices[index[j]] * qtdingr[j];
                }

                qtdbolos++;

                if (price > money){
                    qtdbolos--;
                    break;
                }
            }

            if (qtdbolos > resp){
                resp = qtdbolos;
            }
            
            qtdbolos = 0;
        }

        printf("%d\n", resp);
        qtdbolos = 0;
    }

    return 0;
}