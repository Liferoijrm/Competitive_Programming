#include <stdio.h>
 
int main() {
 
    int hi, mi, hf, mf;
    int dm, dh; 
    
    scanf("%d %d %d %d", &hi, &mi, &hf, &mf);
	
	if ((hi == hf) && (mi == mf)){
		printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
	}
	else if ((hi == hf) && (mi > mf)){
	    dm = (60 - mi) + mf;
	    printf("O JOGO DUROU 23 HORA(S) E %d MINUTO(S)\n", dm);
	}
	else if ((hi == hf) && (mi < mf)){
	    dm = mf - mi;
	    printf("O JOGO DUROU 0 HORA(S) E %d MINUTO(S)\n", dm);  
	}
	else if ((hi > hf) && (mi <= mf)){
	    dh = (24 - hi) + hf;
	    dm = mf - mi;
	    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", dh, dm);  
    }
	else if ((hi > hf) && (mi > mf)){
	    dh = (24 - hi) + hf - 1;
	    dm = (60 - mi) + mf;
	    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", dh, dm); 
	}
	else if ((hi < hf) && (mi <= mf)){
	    dh = hf - hi;
	    dm = mf - mi;
		printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", dh, dm);
	}
	else if ((hi < hf) && (mi > mf)){
	    dh = hf - hi - 1;
	    dm = (60 - mi) + mf;
	    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", dh, dm);
	}

    return 0;
}