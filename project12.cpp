#include <stdio.h>
#include <stdlib.h>

// Yasi verilen bir kisinin seçimlerde oy verip veremeyeceðini söyleyen program.

int main(){
	
	int yas;
	printf("Yasiniz : ");
	scanf("%d",&yas);
	if(yas<18){
		printf("Maalesef yasiniz oy kullanmaya uygun degil.");
	}
	if(yas>=18){
		printf("Oy kullanabilirsiniz.");
	}
	
	return 0;
}
