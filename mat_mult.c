#include <stdio.h>

int main()
{
  
 int a[10][10], b[10][10], mul[10][10]; // static allocation
 int r1,r2,c1,c2,i,j,k;    

 printf("\n Enter the number of rows of the first matrix : ");    
 scanf("%d",&r1);    
 printf("\n Enter the number of columns of the first matrix : ");    
 scanf("%d",&c1);    

 printf("\n Enter the number of rows of the second matrix : ");    
 scanf("%d",&r2);    
 printf("\n Enter the number of columns of the second matrix : ");    
 scanf("%d",&c2);    

 if(c1!=r2)
  {
  	printf("\n Dimension mismatch of the matrices!!!");
  	exit(0); // control exits the current program (i.e main function is terminated)
  }

 printf("\n Enter the first matrix elements : \n");    
 for(i=0;i<r1;i++)    
 {    
  for(j=0;j<c1;j++)    
   scanf("%d",&a[i][j]);    
 }    

 printf("\n Enter the second matrix elements : \n");    
 for(i=0;i<r2;i++)    
 {    
  for(j=0;j<c2;j++)        
   scanf("%d",&b[i][j]);    
 }    
    
 printf("\n Multiply of the matrix.\n The Result is: \n");    
 for(i=0;i<r1;i++)    
 {    
  for(j=0;j<c2;j++)    
  {    
   mul[i][j]=0;    
   for(k=0;k<c1;k++)    
     mul[i][j] = mul[i][j] + a[i][k]*b[k][j];    
  }    
 }     

 //for printing result    
 for(i=0;i<r1;i++)     
 {    
  for(j=0;j<c2;j++)    
  {     
   printf("%d\t",mul[i][j]);    
  }    
  printf("\n");    
 }
     
} 
