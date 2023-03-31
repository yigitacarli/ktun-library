#include <stdio.h>
#include <stdlib.h>

int main() 
{
	char metin[256],kelime[256];
	int i,j,k;
	int sayac1=0,sayac2=0;

	printf("Metni Giriniz: ");
	gets(metin);
	
	printf("Aramak istediginiz kelimeyi giriniz: ");
	gets(kelime);

	for(sayac1=0 ; kelime[sayac1]!='\0' ; sayac1++);

	for(i=0 ; metin[i]!='\0' ; i++) 
	{
		for(j=i,k=0 ; metin[j] == kelime[k] && kelime[k] != '\0' ; j++, k++);

			if(k>0 && kelime[k] == '\0')
			{
				sayac2++;
				printf("Aranan kelime %d - %d indeksleri arasindadir\n",i+1,i+sayac1);
		}	
	}
		if(sayac2==0)
	{
			printf("%s kelimesi metinde bulunmamaktadir!!!",kelime);
	}
		else 
	{
			printf("%s kelimesi metinde %d adet vardir",kelime,sayac2);
	}
	return 0;
}

//Ödev Yiğit Acarlı tarafından yapılmıştır. 221213100.
