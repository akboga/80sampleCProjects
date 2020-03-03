#include <stdio.h>
#include <stdlib.h>

//Girilen sayýnýn tek mi çift mi olduðunu algýlayan program

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
