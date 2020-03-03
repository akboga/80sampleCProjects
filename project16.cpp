#include <stdio.h>
#include <stdlib.h>

//Haftanın gün numarasına karşılık gelen gün adı.

int main(){
	
	int secim;
	printf("Gun numarasini giriniz : ");
	scanf("%d",&secim);
	
	switch(secim){
		case 1:
			printf("Bugun gunlerden pazartesi.");
		break;
		
		case 2:
			printf("Bugun gunlerden sali.");
		break;
		
		case 3:
			printf("Bugun gunlerden carsamba.");
		break;
		
		case 4:
			printf("Bugun gunlerden persembe.");
		break;
		
		case 5:
			printf("Bugun gunlerden cuma.");
		break;
		
		case 6:
			printf("Bugun gunlerden cumartesi.");
		break;
		
		case 7:
			printf("Bugun gunlerden pazar.");
		break;
		
		default:
			printf("Hatali tuslama!!!");
	}
	
	return 0;
}
