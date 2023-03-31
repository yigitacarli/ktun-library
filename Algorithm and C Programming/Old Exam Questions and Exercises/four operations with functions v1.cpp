#include<stdio.h>
#include<stdlib.h>

float dortislem(float a,float b,char secim)
{
	if(secim=='+'){
	return a+b;
	}
	else if(secim=='-'){
	return a-b;
	}
	else if(secim=='*'){
	return a*b;
	}
	else if(secim=='/'){
	return a/b;
	}
	else
	printf("Yanlis Operator Secimi Yaptiniz!!!!!!!");
}

int main() {
	
	int sayi1,sayi2;
	char secim;
	printf("Fonksiyonlar ile 4 Isleme Hosgeldiniz...\n");
	
	printf("Yapmak istediginiz islemi seciniz ( + , - , * , / ): ");
	scanf("%s",&secim);
	
	printf("Lutfen 2 adet sayi giriniz: ");
    scanf("%d%d",&sayi1,&sayi2);
    
	printf("Isleminizin sonucu: %.2f",dortislem(sayi1,sayi2,secim));
	
	return 0;
}
