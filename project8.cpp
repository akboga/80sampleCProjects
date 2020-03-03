#include <stdio.h>
#include <stdlib.h>

// Kullanıcıdan yaşını sorarak yaşının yıl, ay, gün, saat, dakika ve saniye 
// olarak hesaplayan program.

void detay(int yas){
	
	int ay,gun,saat,dakika,saniye;
	
	ay = yas*12;
	printf("%d ay\n",ay);
	gun = 365*yas;
	printf("%d gun\n",gun);
	saat = 24*gun;
	printf("%d saat\n",gun);
	dakika = 60*saat;
	printf("%d dakika\n",dakika);
	saniye = 60*dakika;
	printf("%d saniye ",saniye);
	printf("yasamissiniz.");
	
}

int main(){ 
	
	int yasi;
	printf("Yasiniz : ");
	scanf("%d",&yasi);
	
	char name[10];
	printf("Adiniz : ");
	scanf("%s",&name);
	
	detay(yasi);		
	
	return 0;
}
