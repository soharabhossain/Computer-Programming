
// Function to exchange the values of two variables
// Address of the variables are passed as parameter to this function
void swap(int *a, int *b)
{
  int t;
  
  t=*a;
  *a=*b;
  *b=t;
}

void main()
{
  int a, b;
  a=10;
  b=20;

  printf("\n a = %d", a);
  printf("\n b = %d", b);
  
  swap(&a, &b); // call-by-reference
  
  printf("\n a = %d", a);
  printf("\n b = %d", b);
}


