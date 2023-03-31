#include<stdio.h>

int toplama(int a,int b,char islem) {
	printf("Sonuc: %d",a+b);
}
int cikarma(int a,int b,char islem) {
	printf("Sonuc: %d",a-b);
}
int carpma(int a,int b,char islem) {
	printf("Sonuc: %d",a*b);
}
int bolme(int a,int b,char islem) {
	printf("Sonuc: %d",a/b);
}

int main () {
	
	int sayi1,sayi2;
	char islem;
	
	printf("Fonksiyonlarla 4 isleme hosgeldiniz...\n");
	printf("Yapmak istediginiz islemi seciniz (+ , - , * , /): ");
	scanf("%c",&islem);
	printf("2 Adet sayi giriniz: ");
	scanf("%d%d",&sayi1,&sayi2);
	
	if(islem=='+')
	toplama(sayi1,sayi2,islem);
	
	else if(islem=='-')
	cikarma(sayi1,sayi2,islem);
	
	else if(islem=='*')
	carpma(sayi1,sayi2,islem);
	
	else if(islem=='/')
	bolme(sayi1,sayi2,islem);
	
	return 0;
}
