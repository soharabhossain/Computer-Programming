
// & - address of operator
// * - value at address operator

// Call-by-reference
// pointers that can hold the address of some integer type variable
void swap(int *x, int *y)
{
  int t;
  //printf("\n swap: a = %d", a);
  //printf("\n swap: b = %d", b);
  
  t=*x; // value at address pointed to by x
  *x=*y;
  *y=t;
  
  //printf("\n swap: a = %d", a);
  //printf("\n swap: b = %d", b);
}

void main()
{
  int a, b;
  a=10;
  b=20;
  
  printf("\n main: a = %d", a);
  printf("\n main: b = %d", b);
  
  swap(&a, &b); // call-by-reference
  
  printf("\n main: a = %d", a);
  printf("\n main: b = %d", b);
}

