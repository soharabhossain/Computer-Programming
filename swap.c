
// Function to exchange the values of two variables
// Variables as passed as parameter to this function
void swap(int a, int b)
{
  int t;
    printf("\n swap: a = %d", a);
  printf("\n swap: b = %d", b);
  
  t=a;
  a=b;
  b=t;
  
  printf("\n swap: a = %d", a);
  printf("\n swap: b = %d", b);
}

void main()
{
  int a, b;
  a=10;
  b=20;
  printf("\n main: a = %d", a);
  printf("\n main: b = %d", b);
  
  swap(a, b); // call-by-value
  
  printf("\n main: a = %d", a);
  printf("\n main: b = %d", b);
}

