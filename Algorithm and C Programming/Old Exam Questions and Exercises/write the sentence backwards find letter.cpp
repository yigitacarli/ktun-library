//Cumleyi tersten yazdirma ve aranan kelimenin hangi indisler arasinda oldugunu bulma.

#include<stdio.h>

int main()
{
    char cumle[100];
    int uzunluk = 0;
	int i;
	int harf;
	int found=0;
	int sayi;

    printf("Cumleyi giriniz: ");
     gets(cumle); 
    
    printf("Aranacak harf: ");
     scanf(" %c", &harf);  // Kullan�c�dan aranacak harfi oku

    // c�mle uzunlu�unu bulmak i�in d�ng�
    while (cumle[uzunluk] != '\0') //C�mlenin sonuna kadar ilerler sonda durur \0 
    {
        uzunluk++;
    }

    printf("\nTersten yazilisi: ");
    for (i = uzunluk - 1; i >= 0; i--)  // c�mleyi tersten yazd�rmak i�in tersine d�ng�
    {
        printf("%c", cumle[i]);  // her bir karakteri yazd�r
    }
    printf("\n");
    for (i = 0; cumle[i] != '\0'; i++) {
    if (cumle[i] == harf) {  // E�er harf bulunduysa
      found = 1;  // Harf bulundu�unu i�aretleyin
      sayi++;
	}
}	

	printf("Aradiginiz '%c' harfinden cumlede %d adet bulunmaktadir\n",harf, sayi);

	if (!found) {  // E�er harf bulunamad�ysa
    printf("Aradiginiz '%c' harfi cumle icerisinde bulunmamaktadir.!\n");  // Uyar� mesaj�
  }
  
    return 0;
}
