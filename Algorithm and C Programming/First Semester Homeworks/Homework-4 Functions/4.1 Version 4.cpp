#include <stdio.h>
 
int faktoriyel(int a)
{
    int f = 1;
	int i;
	
    if (a == 0)
    {
        return(f);
    }
    
    else
    {
        for (i = 1; i <= a; i++)
		{
            f = f * i;
		}
    }
    return(f);
}
 
int main()
{
    int n, r, kombinasyon;
    
	printf("N degerini giriniz>> ");
	scanf("%d",&n);
	printf("R degerini giriniz>> ");
	scanf("%d",&r);
	
    kombinasyon = faktoriyel(n) / (faktoriyel(r) * faktoriyel(n - r));
    printf("\nKombinasyon >> %d", kombinasyon);
}
