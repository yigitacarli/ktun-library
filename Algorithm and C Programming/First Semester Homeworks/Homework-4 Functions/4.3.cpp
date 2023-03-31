#include <stdio.h>

int asalmidegilmi(int x)
{
	for(int i=2 ; i<x ; i++)
	{
		if(x%i == 0)
		{
			return 0;
		}
	}
	
	return 1;
}

int main()
{
	int sayi;

	printf("Bir sayi giriniz>> ");
	scanf("%d", &sayi);

		if(asalmidegilmi(sayi) == 1 && sayi!=1)
		{
			printf("Girdiginiz sayi asaldir.");
		}
	    else 
	    {
		printf("Girdiginiz sayi asal degildir!!!");
	    }
	return 0;
}
