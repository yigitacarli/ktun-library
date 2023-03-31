#include<stdio.h>
#include<stdlib.h>

int main() {

int i,j;
struct ders {
    int ders_kod;
    int vize;
    int final;
    double gecmenotu;
};

struct sahis_bilgileri {
    char ad[40];
    char soyad[40];
    int No;
    struct ders dersler[5];
};
	
	struct sahis_bilgileri ogrenciler[5];
	
	for(i=0; i<5; i++){
		printf("%d. Ad giriniz: ",   i+1); scanf("%s",&ogrenciler[i].ad);
		printf("%d. Soyad giriniz: ",i+1); scanf("%s",&ogrenciler[i].soyad);
		printf("%d. No giriniz: ",   i+1); scanf("%d",&ogrenciler[i].No);
		
			for(j=0; j<5 ; j++) {
				printf("%d. Ders kodu giriniz: ",   j+1); scanf("%d",&ogrenciler[i].dersler[j].ders_kod);
				printf("%d. Vize notunu giriniz: ", j+1); scanf("%d",&ogrenciler[i].dersler[j].vize);
				printf("%d. Final notunu giriniz: ",j+1); scanf("%d",&ogrenciler[i].dersler[j].final);
				
				ogrenciler[i].dersler[j].gecmenotu = (float)(ogrenciler[i].dersler[j].vize*0.4)+(float)(ogrenciler[i].dersler[j].final*0.6);
			}
		printf("\n");
	}
	
	printf("\n*** OGRENCI SONUCLARI ***\n");
	for(i=0;i<5;i++){
		printf("Ad: %s / Soyad: %s / No: %d\n",ogrenciler[i].ad,ogrenciler[i].soyad,ogrenciler[i].No);
		printf("Gecme Notlari >> ");
			for(j=0;j<5;j++){
				printf("%d.Ders:%1.2f - ",j+1,ogrenciler[i].dersler[j].gecmenotu);
				}
		printf("\n\n");
		}		
}
