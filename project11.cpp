#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Koordinatları verilen iki sayi arasındaki mesafeyi bulmak.

int main(){
	
	int x1,x2,y1,y2;
	double range;
	
	printf("X koordinatlari : ");
	scanf("%d %d",&x1,&x2);
	
	printf("Y koordinatlarini : ");
	scanf("%d %d",&y1,&y2);
	
	range = sqrt( pow( (y2-y1),2) + pow((x2-x1),2) ) ;

	
	printf("Range : %d",range);
	
	return 0;
}
