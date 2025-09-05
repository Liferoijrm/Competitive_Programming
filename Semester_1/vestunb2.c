#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#ifdef _WIN32 
    #define CLEAR "cls" 
#else 
    #define CLEAR "clear" 
#endif

void cleanScreen(){
    system(CLEAR);
}

int main(){

    while (1){

        cleanScreen();

    const float media_h = 59.64, media_e = 32.146, media_r = 7.107;
    const float dsv_pdr_h = 18.954, dsv_pdr_e = 24.914, dsv_pdr_r = 1.777; 
    float media_l, dsv_pdr_l;

    //as variaveis sao inicializadas com -1 para que, quando um valor nao numerico for inserido pelo usuario, a condicao do while apos a falha dos scanfs seja sempre satisfeita, independentemente do lixo de memoria das variaveis, possibilitando a limpeza do buffer de entrada e a requisicao de novos valores.
    int certas_al = -1, certas_bl = -1, certas_cl = -1;
    int certas_ah = -1, certas_bh = -1, certas_ch = -1, certas_dh = -1;
    int certas_ae = -1, certas_be = -1, certas_ce = -1, certas_de = -1;

    int erradas_al = -1, erradas_bl = -1, erradas_cl = -1;
    int erradas_ah = -1, erradas_bh = -1, erradas_ch = -1, erradas_dh = -1;
    int erradas_ae = -1, erradas_be = -1, erradas_ce = -1, erradas_de = -1;

    float redacao = -1;

    int opcao = -1, resposta = -1;

    float rp1, rp2, rp3, eb;
    float ap1, ap2, ap3, apr, ep1, ep2, ep3, epr;

    float arg_dsj, arg_fin_h, arg_fin_e;

    float ep3h, ep3e, rp3h, rp3e;

    int  qce, qch, fim;

    printf("\n");

    printf("|#@                                                       Bem vindo a calculadora do VestUnB de Pedro Marcinoni!                                                     @#|");
    printf("|#@                                                Para calcular seu argumento final, siga os passos designados adiante                                              @#|\n");

    printf("\n");

    printf("Insira sua opcao de lingua estrangeira (1 para ingles, 2 para espanhol e 3 para frances):\n\n");

    scanf("%d", &opcao);

    while ((opcao != 1) && (opcao != 2) && (opcao != 3)){
        printf("\n");
        printf("Valor(es) invalido(s) identificado(s). Por favor, insira os dados novamente:\n\n");
        while (getchar() != '\n'); // Limpa o buffer de entrada
        scanf("%d", &opcao);
    }

    if (opcao == 1){
        media_l = 15.68;
        dsv_pdr_l = 6.26;
    }

    else if (opcao == 2){
        media_l = 9.723;
        dsv_pdr_l = 5.894;
    }

    else if (opcao == 3){
        media_l = 12.71;
        dsv_pdr_l = 6.873;
    }

    printf("\n");

    printf("Insira o numero de questoes certas da prova de lingua estrangeira dos tipos A, B e C (30 Q):\n\n");

    scanf("%d %d %d", &certas_al, &certas_bl, &certas_cl);

    while ((certas_al < 0) || (certas_bl < 0) || (certas_cl < 0) || (certas_al > 30) || (certas_bl > 30) || (certas_cl > 30) || ((certas_al + certas_bl + certas_cl) > 30)){
        printf("\n");
        printf("Valor(es) invalido(s) identificado(s). Por favor, insira os dados novamente:\n\n");
        while (getchar() != '\n'); // Limpa o buffer de entrada
        scanf("%d %d %d", &certas_al, &certas_bl, &certas_cl);
    }

    printf("\n");

    printf("Insira o numero de questoes erradas da prova de lingua estrangeira dos tipos A, B e C (30 Q):\n\n");

    scanf("%d %d %d", &erradas_al, &erradas_bl, &erradas_cl);

    while ((erradas_al < 0) || (erradas_bl < 0) || (erradas_cl < 0) || (erradas_al > 30) || (erradas_bl > 30) || (erradas_cl > 30) || ((erradas_al + erradas_bl + erradas_cl + certas_al + certas_bl + certas_cl) > 30)){
        printf("\n");
        printf("Valor(es) invalido(s) identificado(s). Por favor, insira os dados novamente:\n\n");
        while (getchar() != '\n'); // Limpa o buffer de entrada
        scanf("%d %d %d", &erradas_al, &erradas_bl, &erradas_cl);
    }

    printf("\n");

    printf("Insira o numero de questoes certas da prova de humanas dos tipos A, B, C e D (120 Q):\n\n");

    scanf("%d %d %d %d", &certas_ah, &certas_bh, &certas_ch, &certas_dh);

    while ((certas_ah < 0) || (certas_bh < 0) || (certas_ch < 0) || (certas_dh < 0) || (certas_ah > 120) || (certas_bh > 120) || (certas_ch > 120) || (certas_dh > 120) || ((certas_ah + certas_bh + certas_ch + certas_dh) > 120)){
        printf("\n");
        printf("Valor(es) invalido(s) identificado(s). Por favor, insira os dados novamente:\n\n");
        while (getchar() != '\n'); // Limpa o buffer de entrada
        scanf("%d %d %d %d", &certas_ah, &certas_bh, &certas_ch, &certas_dh);
    }

    printf("\n");

    printf("Insira o numero de questoes erradas da prova de humanas dos tipos A, B, C e D (120 Q):\n\n");

    scanf("%d %d %d %d", &erradas_ah, &erradas_bh, &erradas_ch, &erradas_dh);

    while ((erradas_ah < 0) || (erradas_bh < 0) || (erradas_ch < 0) || (erradas_dh < 0) || (erradas_ah > 120) || (erradas_bh > 120) || (erradas_ch > 120) || (erradas_dh > 120) || ((certas_ah + certas_bh + certas_ch + certas_dh + erradas_ah + erradas_bh + erradas_ch + erradas_dh) > 120)){
        printf("\n");
        printf("Valor(es) invalido(s) identificado(s). Por favor, insira os dados novamente:\n\n");
        while (getchar() != '\n'); // Limpa o buffer de entrada
        scanf("%d %d %d %d", &erradas_ah, &erradas_bh, &erradas_ch, &erradas_dh);
    }

    printf("\n");

    printf("Insira a nota da redacao (utilize ponto em vez de virgula) (0 a 10):\n\n");

    scanf("%f", &redacao);

    while ((redacao < 0) || (redacao > 10)){
        printf("\n");
        printf("Valor invalido identificado. Por favor, insira os dados novamente:\n\n");
        while (getchar() != '\n'); // Limpa o buffer de entrada
        scanf("%f", &redacao);
    }

    printf("\n");

    printf("Deseja inserir os dados de sua prova de exatas ou deseja calcular o escore necessario para um determinado argumento final? (R:1 ou 2)\n\n");

    scanf("%d", &resposta);

    while ((resposta != 1) && (resposta != 2)){
        printf("\n");
        printf("Valor invalido identificado. Por favor, insira os dados novamente:\n\n");
        while (getchar() != '\n'); // Limpa o buffer de entrada
        scanf("%d", &resposta);
    }

    printf("\n");

    if (resposta == 1){

        printf("Insira o numero de questoes certas da prova de exatas dos tipos A, B, C e D (150 Q):\n\n");

        scanf("%d %d %d %d", &certas_ae, &certas_be, &certas_ce, &certas_de);

        while ((certas_ae < 0) || (certas_be < 0) || (certas_ce < 0) || (certas_de < 0) || (certas_ae > 150) || (certas_be > 150) || (certas_ce > 150) || (certas_de > 150) || ((certas_ae + certas_be + certas_ce + certas_de) > 150)){
            printf("\n");
            printf("Valor(es) invalido(s) identificado(s). Por favor, insira os dados novamente:\n\n");
            while (getchar() != '\n'); // Limpa o buffer de entrada
            scanf("%d %d %d %d", &certas_ae, &certas_be, &certas_ce, &certas_de);
        }

        printf("\n");

        printf("Insira o numero de questoes erradas da prova de exatas dos tipos A, B, C e D (150 Q):\n\n");

        scanf("%d %d %d %d", &erradas_ae, &erradas_be, &erradas_ce, &erradas_de);

        while ((erradas_ae < 0) || (erradas_be < 0) || (erradas_ce < 0) || (erradas_de < 0) || (erradas_ae > 150) || (erradas_be > 150) || (erradas_ce > 150) || (erradas_de > 150) || ((certas_ae + certas_be + certas_ce + certas_de + erradas_ae + erradas_be + erradas_ce + erradas_de) > 150)){
            printf("\n");
            printf("Valor(es) invalido(s) identificado(s). Por favor, insira os dados novamente:\n\n");
            while (getchar() != '\n'); // Limpa o buffer de entrada
            scanf("%d %d %d %d", &erradas_ae, &erradas_be, &erradas_ce, &erradas_de);
        }
        getchar();

        printf("\n");

        rp1 = certas_al + certas_bl*2 + certas_cl*2 - erradas_al - erradas_cl*0.667;

        rp2 = certas_ah + certas_bh*2 + certas_ch*2 + certas_dh*3 - erradas_ah - erradas_ch*0.667;

        rp3 = certas_ae + certas_be*2 + certas_ce*2 + certas_de*3 - erradas_ae - erradas_ce*0.667;

        eb = rp1 + rp2 + rp3;

        ap1 = (rp1 - media_l) / dsv_pdr_l;

        ap2 = (rp2 - media_h) / dsv_pdr_h;

        ap3 = (rp3 - media_e) / dsv_pdr_e;

        apr = (redacao - media_r) / dsv_pdr_r;

        ep1 = 10*ap1;

        ep2 = 10*ap2;

        ep3 = 10*ap3;

        epr = 10*apr;

        arg_fin_h = 2*ep1 + 6*ep2 + 5*ep3 +1.5*epr;

        arg_fin_e = ep1 + 4*ep2 + 8*ep3 +1.5*epr;

        printf("Seu escore bruto: %.3f\n", eb);
        printf("\n");
        printf("Seu argumento final para cursos do grupo 1 (humanas): %.3f (dados de 2019)\n", arg_fin_h);
        printf("Seu argumento final para cursos do grupo 2 (exatas): %.3f (dados de 2019)\n\n", arg_fin_e);

        printf("Pressione <ENTER> para voltar ao inicio do programa:\n");

        while (getchar() != '\n');

    }

    else if (resposta == 2){

        printf("Deseja exibir a lista dos 12 principais argumentos de corte? (1 para sim e 2 para nao)\n\n");

        scanf("%d", &resposta);

        while ((resposta != 1) && (resposta != 2)){
            printf("\n");
            printf("Valor invalido identificado. Por favor, insira os dados novamente:\n\n");
            while (getchar() != '\n'); // Limpa o buffer de entrada
            scanf("%d", &resposta);
        }

        printf("\n");

        if (resposta == 1){
            printf("Medicina: 397,260\nCiencia da Computacao: 309,155\nRelacoes Internacionais: 260,630\nDireito: 227,360\nPsicologia: 187,600\nDesign: 168,550\nCiencias Biologicas: 167,900\nOdontologia: 167,460\nArquitetura e Urbanismo: 148,310\nPublicidade e Propaganda: 131,070\nMedicina Veterinaria: 127,135\nNutricao: 72,160\n(dados de 2023)\n\n");
        }  

        printf("Insira o argumento que deseja atingir (utilize ponto em vez de virgula):\n\n");

        scanf("%f", &arg_dsj);
        getchar();

        while ((arg_dsj < -1000) || (arg_dsj > 1000)){
            printf("\n");
            printf("Valor invalido identificado. Por favor, insira os dados novamente:\n\n");
            while (getchar() != '\n'); // Limpa o buffer de entrada
            scanf("%f", &arg_dsj);
        }

        printf("\n");

        rp1 = certas_al + certas_bl*2 + certas_cl*2 - erradas_al - erradas_cl*0.667;

        rp2 = certas_ah + certas_bh*2 + certas_ch*2 + certas_dh*3 - erradas_ah - erradas_ch*0.667;

        ap1 = (rp1 - media_l) / dsv_pdr_l;

        ap2 = (rp2 - media_h) / dsv_pdr_h;

        apr = (redacao - media_r) / dsv_pdr_r;

        ep1 = 10*ap1;

        ep2 = 10*ap2;

        epr = 10*apr;

        ep3h = (arg_dsj - 2*ep1 - 6*ep2 - 1.5*epr) / 5;

        ep3e = (arg_dsj - ep1 - 4*ep2 - 1.5*epr) / 8;

        rp3h = dsv_pdr_e*(ep3h/10) + media_e;

        rp3e = dsv_pdr_e*(ep3e/10) + media_e;

        qch = round(rp3h - 23);

        qce = round(rp3e - 23);

        if (rp3h > 0){

            printf("Voce precisa de um escore de %.3f na prova de exatas para cursos do grupo 1 (humanas)(dados de 2019)\n", rp3h);
            if (qch > 139){
                qch = round(rp3h - 33);
                if (qch < 134){
                printf("Isso equivale a aproximadamente %d questoes certas de tipo A, 15 questoes certas do tipo B/C e 1 questao certa de tipo D, com 0 erros no total\n", qch);
                }
                else {
                    printf("isso significa que alcancar esse argumento sera impossivel ou extremamente improvavel com a nota atual\n");
                }
            }

            else{
                printf("Isso equivale a aproximadamente %d questoes certas de tipo A, 10 questoes certas do tipo B/C e 1 questao certa de tipo D, com 0 erros no total\n", qch);
            }
        }

        else {
            printf("Voce foi aprovado para qualquer curso de humanas (grupo 1) que exija esse argumento! (dados de 2019)\n");
        }

        printf("\n");

        if (rp3e > 0){

            printf("Voce precisa de um escore de %.3f na prova de exatas para cursos do grupo 2 (exatas)(dados de 2019)\n", rp3e);
            if (qce > 139){
                qce = round(rp3e - 33);
                if (qce < 134){
                    printf("Isso equivale a aproximadamente %d questoes certas de tipo A, 15 questoes certas do tipo B/C e 1 questao certa de tipo D, com 0 erros no total\n", qce);
                }
                else {
                    printf("isso significa que alcancar esse argumento sera impossivel ou extremamente improvavel com a nota atual\n");
                }
            }

            else{
                printf("Isso equivale a aproximadamente %d questoes certas de tipo A, 10 questoes certas do tipo B/C e 1 questao certa de tipo D, com 0 erros no total\n\n", qce);
            }
        }
        else {
            printf("Voce foi aprovado para qualquer curso de exatas (grupo 2) que exija esse argumento! (dados de 2019)\n");
        }

        printf("\n");

        printf("Pressione <ENTER> para voltar ao inicio do programa:\n");

        while (getchar() != '\n');
    }
}

    return 0;
}