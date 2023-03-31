//Sayý Kaydýrma.

#include<stdio.h>
#include<stdlib.h>

int main() {
	
	int sayi,i;
	int ilk,son;
	printf("Hangi sayilar arasinda kaydirma yapmak istiyorsunuz:\n");
	scanf("%d",&ilk); printf("ve\n"); scanf("%d",&son);
	
	printf("\nKaydirmak istediginiz sayiyi giriniz: ");
	scanf("%d",&sayi);
	
	for(i=ilk ; i <= son ; i++) {
		printf("%d ",(i+sayi)%10);
	}
	printf("\n");
	
	return 0;
}

