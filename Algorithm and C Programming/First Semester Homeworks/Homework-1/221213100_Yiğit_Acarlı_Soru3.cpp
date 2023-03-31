#include <stdio.h>
#include <math.h>
#include <stdlib.h>

// Algoritma Ödevi 1-3

// Kullanýcýdan 4 adet sayý istenilecek ve bu sayýlardan tek olanlarýn
// aritmetik ortalamasýný, çift olanlarýn geometrik ortalamasýný hesaplayarak
// ekrana yazdýrýnýz.

int main() {
	
	int i,sayi;
	float tekler=0, ciftler=1, ciftsayac=0, teksayac=0;
   
   for( i=1; i<5; i++) { //4 sayý almasý için i<5 yazýyoruz.
   	
  	printf("%d. Sayiyi giriniz: ",i);
	scanf("%d",&sayi);
   
		if(sayi % 2 == 0) {
			ciftler = ciftler*sayi;
			ciftsayac++;
			sayi = 0;
	}
		else {
			tekler = tekler+sayi;
    		teksayac++;

	}
}
	printf("\nTek Sayilarin Aritmetik Ortalamasi= %.2f\n\n",tekler/teksayac);
	
	printf("Cift Sayilarin Geometrik Ortalamasi= %.2f"   ,pow(ciftler,1/ciftsayac));	

return 0;
}

//Yiðit Acarlý tarafýndan yapýlmýþtýr. Öðrenci Numarasý: 221213100
