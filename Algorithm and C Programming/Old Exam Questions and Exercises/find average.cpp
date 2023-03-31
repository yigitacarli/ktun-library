#include <stdio.h>
#include <stdlib.h>

int main() {
int num_count; // Kullanýcýdan alýnacak sayý sayýsý
int i; // Döngü sayaç deðiþkeni
int num; // Kullanýcýdan alýnan sayý
int sum = 0; // Toplam
double average; // Ortalama
int nums[100]; // Kullanýcýdan alýnan sayýlar // Ortalamadan düþük ve yüksek sayýlarý yazdýrmak için gerekli.

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
	
//Bu program, kullanýcýdan sayý sayýsýný sormakta ve daha sonra  kullanýcýdan bu sayý kadar sayý istemektedir.
//Kullanýcýdan alýnan sayýlarýn toplamýný hesaplar ve ortalamayý bulur.
//Daha sonra, dizi aracýlýðýyla ortalamadan büyük ve ortalamadan küçük sayýlarý sýrasýyla ekrana yazar.
