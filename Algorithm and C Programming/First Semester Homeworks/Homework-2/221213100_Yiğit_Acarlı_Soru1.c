#include <stdio.h>
#include <stdlib.h>

//LAB 2 �DEV 1 - Klavyeden girilen 50 adet tamsay� bir diziye aktar�ld�ktan sonra, bu dizi elemanlar�n�n
//ortalamas�n� ve dizideki ka� eleman�n ortalaman�n alt�nda, ka� eleman�n ortalaman�n �st�nde oldu�unu ekrana yazd�ran program kodunu yaz�n�z.

int main() 
{
	int dizi[50],i, toplam=0, ortalamaalt=0, ortalamaust=0;
	float ortalama;
		
	for(i=0; i<50; i++) 
	{
		printf("%d. Sayiyi giriniz: ", i+1);
        scanf("%d", &dizi[i]);
		toplam += dizi[i];
	}
	
	ortalama = (toplam / i);
	printf("\nOrtalama: %.2f",(float)ortalama);
	
	for(i=0; i<50; i++) 
	{
		if(dizi[i] > ortalama) 
		{
			ortalamaust++;
		}
		else 
		{
			ortalamaalt++;
		}
	}
	
	printf("\nOrtalama ustundekilerin sayisi: %d",ortalamaust);
	
	printf("\nOrtalama altindakilerin sayisi: %d",ortalamaalt);


	return 0;
}


//Yi�it Acarl� taraf�ndan yap�lm��t�r. No: 221213100
