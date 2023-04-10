#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 256

/* Kendisine parametre olarak gelen metni yine kendisine parametre olarak gelen deðer kadar 
"right rotated shift" yapan fonksiyon kodunu "pointer aritmetiði" kullanarak gerçekleþtiren
fonksiyon kodunu yazýnýz. */

void yerdegistir(char *metin, int kaydirma_miktari) 
{
    int uzunluk;
	uzunluk = strlen(metin);
    char temp[uzunluk];

    for(int i = 0 ; i < uzunluk ; i++) 
	{
        temp[(i + kaydirma_miktari) % uzunluk] = *(metin+i);
    }

    for(int i = 0; i < uzunluk; i++) 
	{
        *(metin+i) = temp[i];
    }
}

int main(void) 
{
	char metin[MAX];
	printf("Herhangi bir metin giriniz >> ");
	gets(metin);
	printf("\nMetni ne kadar kaydirmak istiyorsunuz? ");
	int kaydirma_miktari;
	scanf("%d",&kaydirma_miktari);
	
	printf("\nKaydirilmis metin >> ");
	yerdegistir(metin,kaydirma_miktari);
	puts(metin);

return 0;
}
