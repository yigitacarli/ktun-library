#include <stdio.h>

int faktoriyel(int a)
{
	int factsonuc=1;
	for (a; a>=1 ; a=a-1)
		{
			factsonuc=a*factsonuc;
		}
	return factsonuc;
}

int main()
{
    int n, r, kombinasyon;
    
	printf("N degerini giriniz>> ");
	scanf("%d",&n);
	printf("R degerini giriniz>> ");
	scanf("%d",&r);
	
    kombinasyon = faktoriyel(n) / (faktoriyel(r) * faktoriyel(n - r));
    printf("\nC(%d,%d) >> %d", n, r, kombinasyon);
}
