
#include<math.h>

void main()
{
 int n, sq, i, rem;

 printf("\n Enter a number : "); 
 scanf("%d", &n);

 sq = sqrt(n); // square root of n

 for(i=2; i<=sq; i++)
  { 
   rem = n%i;
   if(rem==0)
   {
    printf("\n %d is a Composite number.", n);
    exit(0);
   }   
  }

 printf("\n %d is a Prime number.", n);

}
