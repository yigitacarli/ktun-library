#include <stdio.h>

void kaydir(int dizi[], int boyut, int adim) {
  if (adim > 0) {
    // Dizinin elemanlar�n� sa�a kayd�r
    for (int i = 0; i < adim; i++) {
      int son = dizi[boyut - 1];

      for (int i = boyut - 1; i > 0; i--) {
        dizi[i] = dizi[i - 1];
      }

      dizi[0] = son;
    }
  } else {
    // Dizinin elemanlar�n� sola kayd�r
    for (int i = 0; i > adim; i--) {
      int ilk = dizi[0];

      for (int i = 0; i < boyut - 1; i++) {
        dizi[i] = dizi[i + 1];
      }

      dizi[boyut - 1] = ilk;
    }
  }
}

int main(void) {
	
  int i;
  int adim;
  int boyut;
  
  printf("Dizinin kac elemanli olacagini yaziniz: "); scanf("%d",&boyut);		
  int dizi[boyut];
  
  printf("Dizinin elemanlarini giriniz: \n");
  for(i=0;i<boyut;i++){
  	scanf("%d",&dizi[i]);
  }

  printf("Kaydirmak istediginiz adim sayisini giriniz: "); scanf("%d", &adim);

  kaydir(dizi, boyut, adim); // Dizinin elemanlar�n� kullan�c�n�n girdi�i kadar sa�a kayd�r

  for (i = 0; i < boyut; i++) {
    printf("%d ", dizi[i]);
  }

  printf("\n");
  return 0;
}

