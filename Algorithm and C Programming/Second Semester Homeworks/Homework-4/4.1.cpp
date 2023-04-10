#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//Seçimli Sýralama Algoritmasý (Selection Sort)

/* 0 ile 100 arasýnda rastgele deðerlerden oluþturacaðýmýz 20 elemanlý bir dizi içerisindeki elemanlarý
   "pointer iþlemleri" kullanarak "selection sort algoritmasý" ile büyükten küçüðe sýralayýnýz */
   
int main(void){
	
	int i,j;
	int konum,temp;
	srand(time(NULL));
	int dizi[20];
	
	for(int i=0;i<20;i++)
	{	
		*(dizi+i) = rand()%100;
	}

//---------------------------------------Selection Sort Kýsmý-----------------------------------------
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
