#include<stdio.h>
#include<stdlib.h>

int main () {
	
	
	char metin[256];
	int adet=0;
	int i;
	
	printf("Metin giriniz:  ");
	gets(metin); 
	
	for (i=0; metin[i] != '\0' ; i++)
	{
		if (metin[i]==' '  && metin[i+1] != ' ')
		adet++;
	}
	
	printf("Cumlenizde %d adet kelime bulunmaktadir.",adet+1);
		
	return 0;
}

//Ödev Yiðit Acarlý tarafýndan yapýlmýþtýr. 221213100.
