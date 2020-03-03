#include <stdio.h>
#include <stdlib.h>

int main(){
	
	char harf=' ';
	
	printf("Harf giriniz : ");
	scanf("%c",&harf);
	
	//char harfler[5] = {'a','e','i','o','u'};
	
	if(harf=='a' || harf=='e' || harf=='i' || harf=='o' || harf=='u'){
		printf("Girdiginiz harf sesli.");
	}
	else{
		printf("Sessiz harf!!");
	}
	
	return 0;
}
