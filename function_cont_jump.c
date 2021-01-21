#include<stdio.h>

void display()
{
 printf("\n I am inside the display function ");
}

void print()
{
 printf("\n I am inside the print function ");
}

// In main function - execution starts
void main()
{
 printf("\n I have just enterted the main function ");

 display(); // function call
 
 printf("\n I am inside main function..just came back from display function ");

 print();
 
 printf("\n I am inside main function..just came back from print function ");

 printf("\n I am exiting the main function ");

 
}









