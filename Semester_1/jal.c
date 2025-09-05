#include <stdio.h>

void scanIntoVector(int bin_num[]){
    
    char scan[33];
    int i, exe = 1;

    while (exe == 1){

        exe = 0;
        i = 0;

        scanf("%32s", scan);

        for (i = 0; i < 32; i++){
            if ((scan[i] != '0') && (scan[i] != '1')){
                printf("\n");
                printf("caracter(es) invalido(s) identificado(s). Por favor, insira os dados novamente:\n\n");
                while (getchar() != '\n'); // Limpa o buffer de entrada
                exe = 1;
                break;
            }
        }
    }

    for (i = 0; i < 32; i++){           
        if (scan[i] == '1'){
            bin_num[i] = 1;
        }

        else if (scan[i] == '0'){
            bin_num[i] = 0;
        }
    }
}

void printRegister(int r){

    if (r == 0){
        printf("zero, ");
    }
    else if (r == 1){
        printf("ra, ");
    }
    else if (r == 2){
        printf("sp, ");
    }
    else if (r == 3){
        printf("gp, ");
    }
    else if (r == 4){
        printf("tp, ");
    }
    else if (r == 5){
        printf("t0, ");
    }
    else if (r == 6){
        printf("t1, ");
    }
    else if (r == 7){
        printf("t2, ");
    }
    else if (r == 8){
        printf("s0, ");
    }
    else if (r == 9){
        printf("s1, ");
    }
    else if (r == 10){
        printf("a0, ");
    }
    else if (r == 11){
        printf("a1, ");
    }
    else if (r == 12){
        printf("a2, ");
    }
    else if (r == 13){
        printf("a3, ");
    }
    else if (r == 14){
        printf("a4, ");
    }
    else if (r == 15){
        printf("a5, ");
    }
    else if (r == 16){
        printf("a6, ");
    }
    else if (r == 17){
        printf("a7, ");
    }
    else if (r == 18){
        printf("s2, ");
    }
    else if (r == 19){
        printf("s3, ");
    }
    else if (r == 20){
        printf("s4, ");
    }
    else if (r == 21){
        printf("s5, ");
    }
    else if (r == 22){
        printf("s6, ");
    }
    else if (r == 23){
        printf("s7, ");
    }
    else if (r == 24){
        printf("s8, ");
    }
    else if (r == 25){
        printf("s9, ");
    }
    else if (r == 26){
        printf("s10, ");
    }
    else if (r == 27){
        printf("s11, ");
    }
    else if (r == 28){
        printf("t3, ");
    }
    else if (r == 29){
        printf("t4, ");
    }
    else if (r == 30){
        printf("t5, ");
    }
    else if (r == 31){
        printf("t6, ");
    }
}

void printOffsetB(int bin_num[]){

    int offset_vec[13];
    int offset;

    offset_vec[0] = bin_num[0];
    offset_vec[1] = bin_num[24];
    offset_vec[2] = bin_num[1];
    offset_vec[3] = bin_num[2];
    offset_vec[4] = bin_num[3];
    offset_vec[5] = bin_num[4];
    offset_vec[6] = bin_num[5];
    offset_vec[7] = bin_num[6];
    offset_vec[8] = bin_num[20];
    offset_vec[9] = bin_num[21];
    offset_vec[10] = bin_num[22];
    offset_vec[11] = bin_num[23];
    offset_vec[12] = 0;

    offset = offset_vec[1]*2048 + offset_vec[2]*1024 + offset_vec[3]*512 + offset_vec[4]*256 + offset_vec[5]*128 + offset_vec[6]*64 + offset_vec[7]*32 + offset_vec[8]*16 + offset_vec[9]*8 + offset_vec[10]*4 + offset_vec[11]*2 + offset_vec[12] - offset_vec[0]*4096;

    if (offset >= 0){
        printf("0x%08X (offset de +%d em relacao ao registrador PC = 0x00000000)\n\n", offset, offset);
    }
    else{
        printf("com offset de %d em relacao ao registrador PC\n\n", offset);
    }
}

void printOffsetJ(int bin_num[]){

    int offset_vec[21];
    int offset;

    offset_vec[0] = bin_num[0];
    offset_vec[1] = bin_num[12];
    offset_vec[2] = bin_num[13];
    offset_vec[3] = bin_num[14];
    offset_vec[4] = bin_num[15];
    offset_vec[5] = bin_num[16];
    offset_vec[6] = bin_num[17];
    offset_vec[7] = bin_num[18];
    offset_vec[8] = bin_num[19];
    offset_vec[9] = bin_num[11];
    offset_vec[10] = bin_num[1];
    offset_vec[11] = bin_num[2];
    offset_vec[12] = bin_num[3];
    offset_vec[13] = bin_num[4];
    offset_vec[14] = bin_num[5];
    offset_vec[15] = bin_num[6];
    offset_vec[16] = bin_num[7];
    offset_vec[17] = bin_num[8];
    offset_vec[18] = bin_num[9];
    offset_vec[19] = bin_num[10];
    offset_vec[20] = 0;

    offset = offset_vec[1]*524288 + offset_vec[2]*262144 + offset_vec[3]*131072 + offset_vec[4]*65536 + offset_vec[5]*32768 + offset_vec[6]*16384 + offset_vec[7]*8192 + offset_vec[8]*4096 + offset_vec[9]*2048 + offset_vec[10]*1024 + offset_vec[11]*512 + offset_vec[12]*256 + offset_vec[13]*128 + offset_vec[14]*64 + offset_vec[15]*32 + offset_vec[16]*16 + offset_vec[17]*8 + offset_vec[18]*4 + offset_vec[19]*2 + offset_vec[20]- offset_vec[0]*1048576 ;

    if (offset >= 0){
        printf("0x%08X (offset de +%d em relacao ao registrador PC = 0x00000000)\n\n", offset, offset);
    }
    else{
        printf("com offset de %d em relacao ao registrador PC\n\n", offset);
    }
}

int main(){

    int bin_num[32], i, offset, rs1, rs2, rd;

    while (0 == 0){

        printf("insira uma instrucao do tipo J ou B em binario abaixo:\n\n");

        scanIntoVector(bin_num);

        rs1 = bin_num[12]*16 + bin_num[13]*8 + bin_num[14]*4 + bin_num[15]*2 + bin_num[16];

        rs2 = bin_num[7]*16 + bin_num[8]*8 + bin_num[9]*4 + bin_num[10]*2 + bin_num[11];

        rd = bin_num[20]*16 + bin_num[21]*8 + bin_num[22]*4 + bin_num[23]*2 + bin_num[24];

        if (bin_num[25] == 1 && bin_num[26] == 1 && bin_num[27] == 0 && bin_num[28] == 0 && bin_num[29] == 0 && bin_num[30] == 1 && bin_num[31] == 1){                   //opcode do branch

            if (bin_num[17] == 0 && bin_num[18] == 0 && bin_num[19] == 0){
                printf("beq ");
                printRegister(rs1);
                printRegister(rs2);
                printOffsetB(bin_num);
            }

            else if (bin_num[17] == 0 && bin_num[18] == 0 && bin_num[19] == 1){
                printf("bne ");
                printRegister(rs1);
                printRegister(rs2);
                printOffsetB(bin_num);
            }

            else if (bin_num[17] == 1 && bin_num[18] == 0 && bin_num[19] == 0){
                printf("blt ");
                printRegister(rs1);
                printRegister(rs2);
                printOffsetB(bin_num);
            }

            else if (bin_num[17] == 1 && bin_num[18] == 0 && bin_num[19] == 1){
                printf("bge ");
                printRegister(rs1);
                printRegister(rs2);
                printOffsetB(bin_num);
            }

            else if (bin_num[17] == 1 && bin_num[18] == 1 && bin_num[19] == 0){
                printf("bltu ");
                printRegister(rs1);
                printRegister(rs2);
                printOffsetB(bin_num);
            }

            else if (bin_num[17] == 1 && bin_num[18] == 1 && bin_num[19] == 1){
                printf("bgeu ");
                printRegister(rs1);
                printRegister(rs2);
                printOffsetB(bin_num);
            }

            else {
                printf("\n");
                printf("instrucao invalida identificada.\n\n");
            }
        }

        else if (bin_num[25] == 1 && bin_num[26] == 1 && bin_num[27] == 0 && bin_num[28] == 1 && bin_num[29] == 1 && bin_num[30] == 1 && bin_num[31] == 1){              //opcode do jal
            printf("jal ");
            printRegister(rd);
            printOffsetJ(bin_num);
        }

        else {
            printf("\n");
            printf("instrucao invalida identificada.\n\n");
        }
    }

    return 0;
}