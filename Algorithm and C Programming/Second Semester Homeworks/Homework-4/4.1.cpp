#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//Se�imli S�ralama Algoritmas� (Selection Sort)

/* 0 ile 100 aras�nda rastgele de�erlerden olu�turaca��m�z 20 elemanl� bir dizi i�erisindeki elemanlar�
   "pointer i�lemleri" kullanarak "selection sort algoritmas�" ile b�y�kten k����e s�ralay�n�z */
   
int main(void){
	
	int i,j;
	int konum,temp;
	srand(time(NULL));
	int dizi[20];
	
	for(int i=0;i<20;i++)
	{	
		*(dizi+i) = rand()%100;
	}

//---------------------------------------Selection Sort K�sm�-----------------------------------------
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
