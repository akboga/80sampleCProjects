#include <stdio.h>
#include <stdlib.h>

// Girilen y�l�n art�k y�l olup olmad���n� hesaplayan program.

int main(){
	
	int yil;
	printf("Kac yilindasiniz : ");
	scanf("%d",&yil);
	if(yil%4==0 || yil%400==0){
		printf("Artik yildasiniz.");
	}
	else{
		printf("Yil 365 gun!");
	}
		
	return 0;
}
