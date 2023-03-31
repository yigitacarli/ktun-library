#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	int vize,final,but,gecmenotu;
	
	printf("Dersten kalma/gecme durumunuzu ogrenmek icin gerekli bilgileri giriniz...\n");
	
	printf("Vize notunuzu giriniz: ");   
	scanf("%d",&vize);
	
	printf("Final notunuzu giriniz:  "); 
	scanf("%d",&final);
	
	gecmenotu=(vize*0.4)+(final*0.6);
	
	// iç içe if/else ile yaptým
	
	if(gecmenotu>=60) {
		printf("\n>> Tebrikler dersi basariyla gectiniz. <<");
		
	}

	else {
		printf("\nMaalesef dersten kaldiniz! \nLutfen girdiginiz butun notunu giriniz: ");
		scanf("%d",&but);
		gecmenotu=(vize*0.4)+(but*0.6);
		
		if (gecmenotu>=60) {
		printf("\n>> Tebrikler dersi basariyla gectiniz. <<");
		}
		else 
		{
		printf("\nMaalesef dersten kaldiniz!");
		}
	
	}


return 0;
}

//Yiðit Acarlý tarafýndan yapýlmýþtýr. Öðrenci Numarasý: 221213100
