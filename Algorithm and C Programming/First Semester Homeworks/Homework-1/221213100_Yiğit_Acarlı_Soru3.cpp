#include <stdio.h>
#include <math.h>
#include <stdlib.h>

// Algoritma �devi 1-3

// Kullan�c�dan 4 adet say� istenilecek ve bu say�lardan tek olanlar�n
// aritmetik ortalamas�n�, �ift olanlar�n geometrik ortalamas�n� hesaplayarak
// ekrana yazd�r�n�z.

int main() {
	
	int i,sayi;
	float tekler=0, ciftler=1, ciftsayac=0, teksayac=0;
   
   for( i=1; i<5; i++) { //4 say� almas� i�in i<5 yaz�yoruz.
   	
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

//Yi�it Acarl� taraf�ndan yap�lm��t�r. ��renci Numaras�: 221213100
