#include <stdio.h>
#include <stdlib.h>

// Kullan�c�dan al�nan iki say�n�n b�y�kl���n� kar��la�t�ran program.

int main(){
	
	int i,j;
	printf("Birinci sayiyi giriniz : ");
	scanf("%d",&i);
	
	printf("Ikinci sayiyi giriniz : ");
	scanf("%d",&j);
	
	if(i>j){
		printf("%d sayisi, %d sayisindan buyuktur.",i,j);
	}
	if(j>i){
		printf("%d sayisi, %d sayisindan buyuktur.",j,i);
	}
	
	return 0; 
}
