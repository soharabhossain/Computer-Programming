
// C program to illustrate using continue statement  
#include <stdio.h> 
  
int main() 
{ 
    // loop initialization expression 
    int i = 1; 
   
    // infinite while loop 
    while (i<10) 
    { 
    
       printf("\n\n This message  gets printed in every iteration... "); 
       printf("\n Printing message  with i = %d ", i);
       i++; 
       
       if (i%5==0) 
            continue; 
  
       printf("\n This message will be skipped everytime continue executes... ");        
      
    } 
   
    printf("\n Statement outside the while loop...");
    return 0; 
}

