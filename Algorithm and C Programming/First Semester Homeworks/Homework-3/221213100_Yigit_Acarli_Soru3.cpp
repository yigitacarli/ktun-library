#include <stdio.h>

//T�rk�e kelimeleri alg�lamak zorunde de�il.

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

//�dev Yi�it Acarl� taraf�ndan yap�lm��t�r. 221213100.
