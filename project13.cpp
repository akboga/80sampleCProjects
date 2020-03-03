#include <stdio.h>
#include <stdlib.h>

// Girilen yýlýn artýk yýl olup olmadýðýný hesaplayan program.

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
