//Bir sayýnýn faktoriyelini hesaplama
#include<stdio.h>
#include<stdlib.h>

int faktoriyel(int x)
{
	int i;
	int sonuc=1;
	for (i=1 ; i<=x ; i++)
	{
		sonuc=sonuc*i;
	}
	return sonuc;
}

int main () {
	
	int R,N;
	int kombinasyon;
	
	printf("Lutfen N ve R degerlerini giriniz >>");
	scanf("%d", &N,&R);
	
	kombinasyon = faktoriyel(N) / (faktoriyel(R) * faktoriyel(N - R));
	
	printf("\n\nC(%d,%d) >> %d",N,R,kombinasyon);
	
	return 0;
}


