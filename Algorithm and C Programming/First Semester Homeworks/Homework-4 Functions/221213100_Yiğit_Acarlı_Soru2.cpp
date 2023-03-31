#include <stdio.h>

int toplambasamak(int x) 
{
	int toplam=0;

	while(x>0)
	{
		toplam += x%10;
		x /= 10;
	}
	return toplam;
}

int main()
{
	int sayi;
	printf("Sayi giriniz>> ");
	scanf("%d", &sayi);

	printf("Girilen sayinin basamaklari toplami>> %d", toplambasamak(sayi));
	
	return 0;
}

