
void main()
{
	
	int a=5;
	printf("\n main block - a = %d", a);
    
	{
	    
	 int a=10;
  	 printf("\n outer block - a = %d", a);
    
	 {
  	   int a=20;
  	   printf("\n inner block a = %d", a);
     }
  	
	   printf("\n outer block - a = %d", a);
    
    } 
	printf("\n main block - a = %d", a);

}



