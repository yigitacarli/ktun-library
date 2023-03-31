   #include<stdio.h>
   
   int main() {
   	
   int i, j, z, boyut;
   
   printf("Lutfen seklin boyutunu giriniz: ");
   scanf("%d", &boyut);
   
   for(i=0; i<boyut; i++){
   	
       for(j = i+1; j<boyut; j++)
	    {
           printf("  ");
		}
           for(j=0; j<=i; j++)
		   {
           printf("* ");
           }

       printf("\n");
   }
    
return 0;
}
