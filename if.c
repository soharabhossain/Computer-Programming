#include<stdio.h>

void main()
{
	int a;
	
	printf("\n Enter the value of a : ");
	scanf("%d", &a); // 20
	
    if(a>=100)	// Relational operator	
      printf("\n a >= 100 -> a= %d", a);
 	 
    else if(a> 30 && a<=50)	// && - Logical AND operator	
 	  printf("\n a <= 50 -> a= %d", a);

    else if(a>10 && a<=30)		
 	  printf("\n a < 30 -> a= %d", a);

    else 		
 	  printf("\n a= %d", a);
    	
}

	
	
