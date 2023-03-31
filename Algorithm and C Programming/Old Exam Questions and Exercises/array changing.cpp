#include <stdio.h>

int main() {
	
  int adet,sira1,sira2;
  int ilk,ikinci;
  printf("Kac adet sayi gireceksiniz: ");
  scanf("%d",&adet);
  int dizi[adet];
  int i, temp;

  printf("Dizi elemanlarini girin: ");
  for (i = 0; i < adet; i++) {
    scanf("%d", &dizi[i]);
  }
	
  printf("Hangi siralari yer degistirmek istiyorsunuz?: "); scanf("%d%d",&sira1,&sira2);
  ilk=sira1-1;
  ikinci=sira2-1;	
	
  printf("Dizi oncesi: ");
  for (i = 0; i < adet; i++) {
    printf("%d ", dizi[i]);
  }
  printf("\n");

  temp = dizi[ilk];
  dizi[ilk] = dizi[ikinci];
  dizi[ikinci] = temp;

  printf("Dizi sonrasi: ");
  for (i = 0; i < adet; i++) {
    printf("%d ", dizi[i]);
  }
  printf("\n");

  return 0;
}
