#include <stdio.h>
#include <stdlib.h>

//LAB 2 ÖDEV 1 - Klavyeden girilen 50 adet tamsayý bir diziye aktarýldýktan sonra, bu dizi elemanlarýnýn
//ortalamasýný ve dizideki kaç elemanýn ortalamanýn altýnda, kaç elemanýn ortalamanýn üstünde olduðunu ekrana yazdýran program kodunu yazýnýz.

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


//Yiðit Acarlý tarafýndan yapýlmýþtýr. No: 221213100
