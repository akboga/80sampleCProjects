#include <stdio.h>
#include <stdlib.h>

// Yarýçapý girilen dairenin alaný ve çevresinin bulunmasý.

int main(){
	
	float alan,cevre;
	float pi = 3.14;
	int r;
	
	printf("Yaricapi giriniz : ");
	scanf("%d",&r);
	
	alan = pi*r*r;
	cevre = 2*pi*r;
	
	printf("Dairenin alani : %.2f\n",alan);
	printf("Dairenin cevresi : %.2f",cevre);
	
	return 0;
}
