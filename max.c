
// User-defined Function Prototype Declaration
int max(int, int);

// main function
void main()
{
  int a=5;
  int b=10;
  int r;
  
  r = max(a,b);  // function call/invocation
  
  printf("\n Max is = %d", r);
} 

// User-defined Function Definition
// Define the body of the function
int max(int num1, int num2) 
 {
    /* local variable declaration */
    int result;
 
    if (num1 > num2)
       result = num1;
    else
       result = num2;
 
    return result; 
 }

