#include <stdio.h>
#include <stdlib.h>

// Kullanýcýdan iki sayi girmesini isteyin ve bunlarýn toplamýný ekrana bastýrýn.

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
