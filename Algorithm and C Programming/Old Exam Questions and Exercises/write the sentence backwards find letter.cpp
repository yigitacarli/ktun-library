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
     scanf(" %c", &harf);  // Kullanýcýdan aranacak harfi oku

    // cümle uzunluðunu bulmak için döngü
    while (cumle[uzunluk] != '\0') //Cümlenin sonuna kadar ilerler sonda durur \0 
    {
        uzunluk++;
    }

    printf("\nTersten yazilisi: ");
    for (i = uzunluk - 1; i >= 0; i--)  // cümleyi tersten yazdýrmak için tersine döngü
    {
        printf("%c", cumle[i]);  // her bir karakteri yazdýr
    }
    printf("\n");
    for (i = 0; cumle[i] != '\0'; i++) {
    if (cumle[i] == harf) {  // Eðer harf bulunduysa
      found = 1;  // Harf bulunduðunu iþaretleyin
      sayi++;
	}
}	

	printf("Aradiginiz '%c' harfinden cumlede %d adet bulunmaktadir\n",harf, sayi);

	if (!found) {  // Eðer harf bulunamadýysa
    printf("Aradiginiz '%c' harfi cumle icerisinde bulunmamaktadir.!\n");  // Uyarý mesajý
  }
  
    return 0;
}
