#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

int main()
{
    int i, x, y;
    int dizi1[50],dizi2[50],dizi3[50];;
    
    srand(time(NULL));
    
    printf("\nA Blogu\n\n");
    for(i = 0 ; i < 50 ; i++)
    {
		dizi1[i] = rand() % 100;
		printf("[%d] ",dizi1[i]);
		
		if(dizi1[i]>=5 && dizi1[i]<10){
			dizi1[i]=dizi3[y];
		}
        //(1-100) Deðerleri arasýnda rastgele dizi.      
    }

    printf("\n\nB Blogu\n\n");
    for(x = 0 ; x < 50 ; x++)
    {
		dizi2[x] = rand() % 100;
        //(1-100) Deðerleri arasýnda rastgele dizi.
		printf("[%d] ",dizi2[x]); 
		
			if(dizi2[x]>=5 && dizi2[x]<10){
			dizi2[x]=dizi3[y];
		}  
	}	
	printf("\n\nC Blogu\n\n");
    for(y = 0 ; y < 50 ; y++)
    {
        //(1-100) Deðerleri arasýnda rastgele dizi.
		printf("[%d] ",dizi3[y]); 
		
		}
		   	
    return 0;
}
