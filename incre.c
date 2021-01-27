
#include <stdio.h> 
  
void main() 
{ 
    int i=0; 
    
    printf( "%d ", i); //0
    printf( "%d ", ++i); //1  pre-increment
    printf( "%d ", i++); //1  post-increment
    printf( "%d", i); //2

    int j=0; 
    
    printf( "\n%d ", j); //0
    printf( "%d ", j++); //0  post-increment
    printf( "%d ", ++j); //2  pre-increment
    printf( "%d", j); //2

} 

