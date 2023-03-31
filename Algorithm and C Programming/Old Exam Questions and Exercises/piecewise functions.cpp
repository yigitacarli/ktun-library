#include<stdio.h>
#include<stdlib.h>
#include<math.h>


/*

		3x^2 + 2     x<0
f(x) 	2x - 1	   	0<=x<10
		2x^2 - x	 x >= 10 


*/


int main() {
	
	baslangic:
	int x,y;
	
	printf("f(x) icin x degeri giriniz: \n");
	scanf("%d",&x);
	
	if(x<0) {
	y = (3*pow(x,2) + 2);
	}
	
	else if(0<=x && x<10) {
	y = 2*x - 1;
	}
	
	else if(x >= 10) {
	y = (2*pow(x,2) - x);
	}
	
	printf("f(%d): %d\n\n",x,y);
	
	goto baslangic;
	return 0;
}
