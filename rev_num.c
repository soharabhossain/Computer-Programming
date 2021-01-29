#include <stdio.h>
// Reverse a number

void main() 
{
    int n, reverse = 0, remainder;

    printf("\n Enter an integer: ");
    scanf("%d", &n);   // 1234
      
	while (n != 0) 
	 {
        remainder = n % 10;  //3
        
        printf("\n\n remainder = %d", remainder);

        reverse = reverse * 10 + remainder; // 40 + 3 = 43
        
		n /= 10; // 123

        printf("\n rest of the number = %d", n);
        
        printf("\n reversed number = %d", reverse);
     }
     
    printf("\n Reversed number = %d", reverse);
    
}


