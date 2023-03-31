#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int dizi1[10],dizi2[10];
	int i,x,s,y,z,temp;
		
	for(i=0; i<10; i++) 
	{
		printf("1.Dizi icin %d. Sayiyi giriniz: ", i+1);
        scanf("%d", &dizi1[i]);
		
	}
	
	printf("\n");
	
	for(x=0; x<10; x++) 
	{
		printf("2.Dizi icin %d. Sayiyi giriniz: ", x+1);
        scanf("%d", &dizi2[x]);
		
	}
	printf("\n1.Dizi = [%d] [%d] [%d] [%d] [%d] [%d] [%d] [%d] [%d] [%d]\n",dizi1[0],dizi1[1],dizi1[2],dizi1[3],dizi1[4],dizi1[5],dizi1[6],dizi1[7],dizi1[8],dizi1[9]);
	printf("\n2.Dizi = [%d] [%d] [%d] [%d] [%d] [%d] [%d] [%d] [%d] [%d]\n\n",dizi2[0],dizi2[1],dizi2[2],dizi2[3],dizi2[4],dizi2[5],dizi2[6],dizi2[7],dizi2[8],dizi2[9]);
	
	printf("-------------------------------------------------------------------------\n");
	
	for(s=0; s<10; s+=2) 
	{
		temp=dizi1[s];
		dizi1[s]=dizi2[s+1];
		dizi2[s+1]=temp;
	}

	printf("\n1.Dizi Yeni Hali = ");
	for(y=0; y<10; y++) 
	{
		printf("[%d] ", dizi1[y]);
	}
	
	
	printf("\n\n2.Dizi Yeni Hali = ");
	for(z=0; z<10; z++) 
	{
		printf("[%d] ", dizi2[z]);
	}
	
 return 0;
}

//Yiðit Acarlý tarafýndan yapýlmýþtýr. No: 221213100
