#include<stdio.h>

// Array of structures

// user-defined data type
struct student
{
  char name[10];
  int en;
  float agg;	
};

struct student s[10];

void main()
{
	int i;
	
	for (i=0;i<2;i++)
	{
	 
  	 printf("\n Enter the name of the student : ");
	 gets(s[i].name);
	 printf("\n Enter the enrollment no the student : ");
	 scanf("%d", &s[i].en);
	 printf("\n Enter the agg marks the student : ");
	 scanf("%f", &s[i].agg);
	 fflush(stdin);
    } 

	for (i=0;i<2;i++)
	{
	 printf("\n Name of the student : %s", s[i].name);
	 printf("\n Enrollment no of the student : %d", s[i].en );
	 printf("\n Aggregate marks of the student : %f", s[i].agg );
    }
		
}

