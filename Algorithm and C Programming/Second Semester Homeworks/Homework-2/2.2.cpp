/* 
2.Soru: 2.	0 ile 100 arasında rasgele oluşturduğunuz 100 sayıdan (5. bitleri 0 olan sayıların 4. bitini 1 yaparak sayilar0.txt dosyasına) 
(5. bitleri 1 olan sayıların 3. bitini 0 yaparak sayilar1.txt dosyasına) yazan program kodunu yazınız.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	
	int i;
    srand(time(NULL));
    FILE *dosya1 = fopen("sayilar0.txt", "w"); 
    FILE *dosya2 = fopen("sayilar1.txt", "w"); 

    for(i = 0; i < 100; i++) {
        int sayi = rand() % 100; 

        if((sayi & (1 << 5)) == 0) {       
            sayi |= (1 << 4);              
            fprintf(dosya1, "%d\n", sayi); 
        }
        else {                             
            sayi &= ~(1 << 3);             
            fprintf(dosya2, "%d\n", sayi); 
        }
    }

    fclose(dosya1);
    fclose(dosya2);
    return 0;
}

