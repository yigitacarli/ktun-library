#include <stdio.h>

//Türkçe kelimeleri algılamak zorunde değil.

int main() 
{
	char metin[256];
	int i;
	
	printf("(turkce karakter kullanmayiniz)\n");
	printf("Metni giriniz: ");
	gets(metin);

	printf("Cikti: ");
	
	for(i=0;metin[i]!='\0'; i++)
	{
		if(metin[i]<=90 && 65<=metin[i]) 
		{
			metin[i] = metin[i] + 32;
		}
		else if(metin[i]<=122 && 97<=metin[i]) 
		{
			metin[i] = metin[i] - 32;
		}
	}
	printf("%s", metin);
return 0;
}

//Ödev Yiğit Acarlı tarafından yapılmıştır. 221213100.
