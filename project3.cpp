#include <stdio.h>
#include <stdlib.h>

// Kullan�c�dan iki sayi girmesini isteyin ve bunlar�n toplam�n� ekrana bast�r�n.

int main(){
	
	int i,j,toplam;
	
	printf("Birinci sayiyi giriniz : ");
	scanf("%d",&i);
	
	printf("Ikinci sayiyi giriniz : ");
	scanf("%d",&j);
	
	toplam = i+j;
	
	printf("Girdiginiz sayilarin toplami : %d",toplam);
	
	return 0;
}
