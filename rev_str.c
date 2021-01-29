#include <stdio.h>
// Reverse a string
 
void main() 
{ 
    char str[10] = "12345"; 
    char reverse[10] = ""; 

    int n = strlen(str); 
    int i;

    for (i = 0; i < n ; i++) 
        reverse[i] = str[n-i-1]; 

    printf("%s", reverse); 
    
} 


