#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	srand(time(NULL));
	FILE *fp = fopen("sayilar.txt", "w");
	
	for(int i=0;i<100;i++){
		fprintf(fp,"%d ",rand()%1000);
	}
	
	fclose(fp);
	return 0;
}
