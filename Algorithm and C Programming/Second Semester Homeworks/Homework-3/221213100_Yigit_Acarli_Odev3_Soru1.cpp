#include<stdio.h>
#include<stdlib.h>
//OBEB = Ortak Bölenlerin En Büyüðü //
 
int obeb(int s1, int s2) 
{
    if (s2 == 0)
	{
        return s1;	
	}
	
    return obeb(s2, s1%s2);
} 
 
int main() {
    int s1,s2;

    printf("1.Sayiyi giriniz: \n"); scanf("%d", &s1);
	printf("2.Sayiyi giriniz: \n"); scanf("%d", &s2);
	
	int sonuc = obeb(s1, s2);
	
	printf("\n\nOBEB: %d", sonuc);
	
return 0;
}
 

