#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//Seçimli Sıralama Algoritması (Selection Sort)

/* 0 ile 100 arasında rastgele değerlerden oluşturacağımız 20 elemanlı bir dizi içerisindeki elemanları
   "pointer işlemleri" kullanarak "selection sort algoritması" ile büyükten küçüğe sıralayınız */
   
int main(void){
	
	int i,j;
	int konum,temp;
	srand(time(NULL));
	int dizi[20];
	
	for(int i=0;i<20;i++)
	{	
		*(dizi+i) = rand()%100;
	}

//---------------------------------------Selection Sort Kısmı-----------------------------------------
	printf("Dizimizin elemanlari: \n");
	for(int i=0;i<20;i++)
	{
		printf("%d ",*(dizi+i));
	}
	
	for(i=0 ; i<20-1 ; i++)
	{	
		konum=i;
		
		for(j=i+1 ; j<20 ; j++) 
		{
			if(*(dizi+konum) > *(dizi+j))
			{	
				konum=j;
			}		
		}
		
		if(konum != i) 
		{
			temp = *(dizi+i);
			*(dizi+i) = *(dizi+konum);
			*(dizi+konum) = temp;	
		}
	}
	
	printf("\n\nSiralanmis dizimizin elemanlari: \n");
	for(int i=0;i<20;i++)
	{
		printf("%d ",*(dizi+i));
	}
	
return 0;
}
