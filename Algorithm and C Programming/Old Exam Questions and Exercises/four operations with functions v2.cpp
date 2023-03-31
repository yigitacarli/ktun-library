#include<stdio.h>

// Toplama i�lemini yapacak fonksiyon
int topla(int a, int b) {
  return a + b;
}
// ��karma i�lemini yapacak fonksiyon
int cikar(int a, int b) {
  return a - b;
}
// �arpma i�lemini yapacak fonksiyon
int carp(int a, int b) {
  return a * b;
}
// B�lme i�lemini yapacak fonksiyon
int bol(int a, int b) {
  return a / b;
}

int main() {
  int a, b;
  char islem;
  printf("Birinci sayiyi girin: "); scanf("%d", &a);
  printf("Ikinci sayiyi girin: ");  scanf("%d", &b);

  printf("Yapilacak islemi girin (+, -, * veya /): "); scanf(" %c", &islem);
  
  int sonuc;
  if (islem == '+') {
    sonuc = topla(a, b);
} else if (islem == '-') {
    sonuc = cikar(a, b);
} else if (islem == '*') {
    sonuc = carp(a, b);
} else if (islem == '/') {
    sonuc = bol(a, b);
} else {
    printf("Ge�ersiz i�lem!\n");
    return 1;
  }
  printf("Sonuc: %d\n", sonuc);


return 0;
}
