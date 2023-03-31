#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Algoritma Ödevi 1-2


int main()
{
    int i, sayi, cifttoplam=0, ciftsayisi=0;     
    double ciftortalama;
	                                     
    printf("Herhangi bir sayi giriniz: ");                       
    scanf("%d",&sayi);
    
    for(i=0; i<=sayi; i++) {     
	                                
    if(i % 2 == 0){                                           
        cifttoplam=cifttoplam+i;
        ciftsayisi++;
    	}
    }
    
ciftortalama = cifttoplam/ciftsayisi;         
printf("\nCift sayilarin toplami: %d \n", cifttoplam);          
printf("Cift sayilarin aritmetik ortalamasi: %.2f ",ciftortalama);

    return 0;
}

//10 yazınca toplam=30 & aritmetik ortalama=5 çıkıyor 0+2+4+6+8+10/6=5

//Yiğit Acarlı tarafından yapılmıştır. Öğrenci Numarası: 221213100
