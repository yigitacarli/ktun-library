#include <stdio.h>

int faktoriyel(int a)
{
	int sonuc=1;

	for(int i=1;i<=a;i++)
	{
		sonuc*=i;
	}
	return sonuc;
}

int permutasyon(int a,int b)
{
	int sonuc;
	sonuc=faktoriyel(a)/faktoriyel(a-b);
	return sonuc;
}

int kombinasyon(int a,int b)
{
	int sonuc;
	sonuc= permutasyon(a,b)/faktoriyel(b);
	return sonuc;
}

int main()
{
	int n,r;
	printf("N degerini giriniz>> ");
	scanf("%d",&n);
	printf("r degerini giriniz>> ");
	scanf("%d",&r);

	printf("\n\nKombinasyon>> %d",kombinasyon(n,r));

	return 0;
}
