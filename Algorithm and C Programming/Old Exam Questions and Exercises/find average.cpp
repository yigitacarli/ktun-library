#include <stdio.h>
#include <stdlib.h>

int main() {
int num_count; // Kullan�c�dan al�nacak say� say�s�
int i; // D�ng� saya� de�i�keni
int num; // Kullan�c�dan al�nan say�
int sum = 0; // Toplam
double average; // Ortalama
int nums[100]; // Kullan�c�dan al�nan say�lar // Ortalamadan d���k ve y�ksek say�lar� yazd�rmak i�in gerekli.

printf("Kac tane sayi gireceksiniz? ");
scanf("%d", &num_count);

for (i = 0; i < num_count; i++) {
	printf("%d. sayiyi girin: ", i + 1);
	scanf("%d", &num);
	sum += num;
	nums[i] = num;
}

average = (double)sum / num_count;
printf("Ortalama: %f\n", average);

printf("\nOrtalamadan buyuk sayilar:\n");
for (i = 0; i < num_count; i++) {
	if (nums[i] > average) {
		printf("%d ", nums[i]);
	}	
}

printf("\nOrtalamadan kucuk sayilar:\n");
for (i = 0; i < num_count; i++) {
	if (nums[i] < average) {
		printf("%d ", nums[i]);
	}	
}

return 0;
}
	
//Bu program, kullan�c�dan say� say�s�n� sormakta ve daha sonra  kullan�c�dan bu say� kadar say� istemektedir.
//Kullan�c�dan al�nan say�lar�n toplam�n� hesaplar ve ortalamay� bulur.
//Daha sonra, dizi arac�l���yla ortalamadan b�y�k ve ortalamadan k���k say�lar� s�ras�yla ekrana yazar.
