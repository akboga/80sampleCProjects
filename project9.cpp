#include <stdio.h>
#include <stdlib.h>

//Girilen say�n�n tek mi �ift mi oldu�unu alg�layan program

int main(){
	
	int i;
	printf("Lutfen bir sayi giriniz : ");
	scanf("%d",&i);
	
	if(i%2==0){
		printf("Girilen sayi cift.");
	}
	if(i%2!=0){
		printf("Girilen sayi tek.");
	}
	
	return 0;
}
