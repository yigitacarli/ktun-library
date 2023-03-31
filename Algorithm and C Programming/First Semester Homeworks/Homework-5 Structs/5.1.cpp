#include<stdio.h>
#include<stdlib.h>

struct isci
{
	char ad[20];
	char soyad[20];
	int yas;
	double aylikucret;
};

struct isci bilgialma() 
{
	struct isci girilen;

	printf("Ad Giriniz: ");              gets(girilen.ad);
	printf("Soyad Giriniz: ");           gets(girilen.soyad);
	printf("Yas Giriniz: ");             scanf("%d",&girilen.yas);
	printf("Aylik Ucreti Giriniz: ");    scanf("%d",&girilen.aylikucret);

	return girilen;
} 

int main() 
{
	struct isci iscisonuc;

	iscisonuc=bilgialma();

	printf("\n<<< Iscinin bilgileri >>>\n");
	printf("Ad: %s\n",iscisonuc.ad);
	printf("Soyad: %s\n",iscisonuc.soyad);
	printf("Yas: %d\n",iscisonuc.yas);
	printf("Aylik Ucret: %d TL",iscisonuc.aylikucret);
}
