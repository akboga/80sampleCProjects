#include <stdio.h>
#include <stdlib.h>

// Kullan�c�ya gidilecek mesafe ve var�� zaman�n� sorarak gitmesi gereken h�z� hesaplay�n.

int main(){
	
	//Form�l --> x=v*t
	int mesafe,varisZamani,hiz;
	
	printf("Gideceginiz mesafeyi yaziniz : ");
	scanf("%d",&mesafe);
	
	printf("Kac saatte gitmeniz gerekiyor : ");
	scanf("%d",&varisZamani);
	
	hiz = mesafe/varisZamani;
	
	printf("Gitmeniz gereken hiz : %d km/sn",hiz);
	
	return 0;
}
