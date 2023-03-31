/* 
1.Soru: Kendisine parametre olarak gelen tamsay�y� bitsel operat�rler kullanarak yine kendisine parametre olarak gelen say� kadar left rotated shift yapan fonksiyon kodunu yaz�n�z.
Yaz�lan fonksiyonu program i�eresinde kullan�n�z.
*/

#include <stdio.h>

int sola_kaydirma(int sayi, int kaydirma_miktari) {
	
    return (sayi << kaydirma_miktari) | (sayi >> (sizeof(int)*8 - kaydirma_miktari)); //left shift rotate k�sm�.
}

int main() {
    int sayi;
    int kaydirma_miktari;
    int sonuc;
    
    printf("Bir sayi giriniz:\n"); 
	scanf("%d",&sayi);
    printf("Ne kadar sola kaydirmak istiyorsunuz?\n"); 
	scanf("%d",&kaydirma_miktari);
    
    if(kaydirma_miktari<0) {
    	printf("\n !!! Hatali islem !!! Girilen sayi negatif olamaz.\n");
    	return 0;
	}
    
    sonuc = sola_kaydirma(sayi,kaydirma_miktari);
    
    printf("\n%d sayisi %d kere sola kaydirildi. Cevap: %d\n", sayi, kaydirma_miktari, sonuc);
    return 0;
}
