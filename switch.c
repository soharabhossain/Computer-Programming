#include<stdio.h>

void main()
{
	int a;
	
	printf("\n Enter the value of a : ");
	scanf("%d", &a); 
	
    switch(a)
	{
     case 1:		
 	  printf("\n Case 1 = %d", a);
      break; 
      
     case 2:		
   	  printf("\n Case 2 = %d", a);
      break;
      
     case 10:		
 	  printf("\n Case 10 = %d", a);
      break;
      
     case 5:		
 	  printf("\n Case 5 = %d", a);
      break;

     case 123:		
 	  printf("\n Case 123 = %d", a);
      break; 

     default:		
 	  printf("\n Default = %d", a);
      	
    }

   printf("\n Statement outside switch....");
	
	//return 0;
}
