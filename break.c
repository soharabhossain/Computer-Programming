
// C program to illustrate 
// using break statement in infinite loops 
#include <stdio.h> 
  
int main() 
{ 
    // loop initialization expression 
    int i = 1; 
   
    // infinite while loop 
    while (1) 
    { 
        if (i > 10) 
            break; 
   
        printf("\n %d ", i); 
        i++; 
    } 
   
    printf("\n Statement outside the while loop...");
    return 0; 
}

