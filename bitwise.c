#include <stdio.h>

void main() 
{
   unsigned int a = 60;	/* 60 = 0011 1100 */  
   unsigned int b = 13;	/* 13 = 0000 1101 */
   int c = 0;           

   // Bit-wise AND
   c = a & b;       /* 12 = 0000 1100 */ 
   printf("\n Bit-wise AND - Value of c is %d\n", c );

   // Bit-wise OR
   c = a | b;       /* 61 = 0011 1101 */
   printf("\n Bit-wise OR - Value of c is %d\n", c );

   // Bit-wise XOR
   c = a ^ b;       /* 49 = 0011 0001 */
   printf("\n Bit-wise XOR - Value of c is %d\n", c );

   // Bit-wise NOT
   c = ~a;          /*-61 = 1100 0011 */
   printf("\n Bit-wise NOT - Value of c is %d\n", c );

   // Bit-wise Left-shift by one -- multiplication by 2
   c = a << 1;     /* 120 = 0111 1000 */
   printf("\n Bit-wise Left Shift - Value of c is %d\n", c );

   // Bit-wise Right-shift by one -- division by 2
   c = a >> 1;     /* 60 = 0000 1111 */
   printf("\n Bit-wise Right Shift - Value of c is %d\n", c );

   // Bit-wise Right-shift by one -- division by 2
   c = a >> 2;     /* 15 = 0000 1111 */
   printf("\n Bit-wise Right Shift by 2 - Value of c is %d\n", c );

}


