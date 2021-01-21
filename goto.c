
// C program to illustrate using continue statement  
#include <stdio.h> 
  
int main() 
{ 
    // loop initialization expression 
    int i = 1; 
   
    while (i<=6) 
     { 
       printf("\n\n This message  gets printed when loop iterates normally... "); 
       
       l1: printf("\n Printing message  with i = %d ", i);
       
       if (i%3==0) 
          {
           	i++;
            goto l1;
	      }

	   i++; 
  
       printf("\n This message will be skipped everytime goto executes... ");        
      
     } 
   
    printf("\n\n Statement outside the while loop...");
    return 0; 
}

