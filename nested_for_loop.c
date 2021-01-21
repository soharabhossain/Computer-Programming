
// C program to illustrate for loop 
#include <stdio.h> 
  
void main() 
{ 
    int i, j; // Variable declaration 

    //for(i=1;i<=3;i++)
    
    i=1;
    while(i<=3)
       {
        printf("\n i = %d ", i);
	    for(j=1;j<=2;j++)
        { 
          printf("\n j = %d ", j);
          printf( "Hello World\n");     
        } 
        i++;
       }

} 

