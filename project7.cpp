#include <stdio.h>
#include <stdlib.h>

// Kullanýcýya gidilecek mesafe ve varýþ zamanýný sorarak gitmesi gereken hýzý hesaplayýn.

int main(){
	
	//Formül --> x=v*t
	int mesafe,varisZamani,hiz;
	
	printf("Gideceginiz mesafeyi yaziniz : ");
	scanf("%d",&mesafe);
	
	printf("Kac saatte gitmeniz gerekiyor : ");
	scanf("%d",&varisZamani);
	
	hiz = mesafe/varisZamani;
	
	printf("Gitmeniz gereken hiz : %d km/sn",hiz);
	
	return 0;
}
