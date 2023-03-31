#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int asalkontrol(int x){
	int b=0;
	for(int k=2; k<x; k++){
		if(x%k==0){
			b++;
		}
	}
	
	if(b>0){
		return 0;
			
	}else if(b==0){
		return 1;
	}
}

int main(){
	int a;
	FILE *fp1 = fopen("sayilar.txt", "r");
	FILE *fp2 = fopen("sayilar2.txt", "w");
	
	for(int i=0; i<100; i++){
		fscanf(fp1,"%d ",&a);
		
		if(asalkontrol(a)==1){
			fprintf(fp2,"%d ",a);
		}
	}
	
	fclose(fp1);
	fclose(fp2);	
	return 0;
}
