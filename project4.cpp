#include <stdio.h>
#include <stdlib.h>

// Bir kenar� girilen karenin alan� ve �evresini hesaplayan program.

int main(){
	
	int i,alan,cevre;
	
	printf("Karenin bir kenar uzunlugunu giriniz : ");
	scanf("%d",&i);
	
	alan = i*i;
	
	cevre = i*4;
	
	printf("Karenin alani : %d\n",alan);
	printf("Karenin cevresi : %d\n",cevre);
	
	return 0;
}
