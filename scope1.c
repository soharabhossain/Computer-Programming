     
#include<stdio.h> 

int increment() 
{ 
  static int count;  //static variables are auto initialized to zero if not done explicitly 
                     // static variables retain values in different function calls

  //int count;       // auto variables normally holds garbage also does not hold values in different function calls
  count++; 
  return count; 
} 
   
void main() 
{ 
  printf("%d ", increment()); 
  printf("%d ", increment()); 
  printf("%d ", increment()); 
  printf("%d ", increment()); 
   
}
