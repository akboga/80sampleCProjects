#include <stdio.h>
#include <stdlib.h>

// �ki kenar� girilen d�rtgenin alan ve �evresinin hesaplanmas�.

int main(){
	
	int i,j,alan,cevre;
	
	printf("Birinci kenar uzunlugunu giriniz : ");
	scanf("%d",&i);
	
	printf("Ikinci kenar uzunlugunu giriniz : ");
	scanf("%d",&j);
	
	alan = i*j;
	cevre = (i*2)+(j*2);
	
	printf("Dortgenin alani : %d\n",alan);
	printf("Dortgenin cevresi : %d",cevre);
	
	return 0;
}
