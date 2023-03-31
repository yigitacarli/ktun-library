#include<stdio.h>
#include<stdlib.h>
#include<math.h>

/* Algoritma Vizesi 3. Soru
Kullan�c�n�n istedi�i kadar do while d�ng�s� kullanarak 3,4 veya 5 basamakl� say�lar�n Armstrong say�s� olup olmad���n� belirleyen kodu yaz�n�z. */


int main() {
	
    int n,num,r,ans=0;
     
    printf("Pozitif 3,4 veya 5 basamakli bir sayi giriniz: ");
    scanf("%d", &num);
    n=num;
	
	if(n<0) {
		printf("Girdiginiz sayi pozitif olmali.");
		return 0;
	}
	
    do
    {
        r = n%10;
        ans = ans+r*r*r;
        n = n/10;
    }
	while(n>0);
	
     
    if(ans==num)
    {
        printf("%d bir Armstrong sayisidir.",num);
    }
    else
    {
        printf("!!! %d bir Armstrong sayisi degildir !!!",num);
    }
		
	return 0;
}
