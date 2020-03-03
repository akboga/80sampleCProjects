#include <stdio.h>
#include <stdlib.h>

// Girilen bir nota karþýlýk gelen harf notu.
/*
100-90 --> AA
70-89  --> BB
60-69  --> CC
50-59  --> DD
0-49   --> FF
*/

int main(){
	
	int note;
	
	printf("Notunuz : ");
	scanf("%d",&note);
	
	if(note>=90){
		printf("Harf notunuz AA. Tebrikler gectiniz.");
	}
	if(note>=70 && note<=89){
		printf("Harf notunuz BB. Tebrikler gectiniz.");
	}
	if(note>=60 && note<=69){
		printf("Harf notunuz CC. Tebrikler gectiniz.");
	}
	if(note>=50 && note<=59){
		printf("Harf notunuz DD. Tebrikler gectiniz.");
	}
	if(note<50 && note>0){
		printf("Harf notunuz FF. Ders tekrari!");
	}
	if(note<0){
		printf("HATALI NOT GIRISI!!!");
	}
		
	return 0;
}
