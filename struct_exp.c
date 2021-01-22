
// Defining structures - user defined data types

// user-defined data type
struct student
{
  char name[10];
  int en;
  float agg;	
};

struct student s1;

void main()
{
    // Take input	 
	printf("\n Enter the name of the student : ");
	gets(s1.name);
	printf("\n Enter the enrollment no the student : ");
	scanf("%d", &s1.en);
	printf("\n Enter the agg marks the student : ");
	scanf("%f", &s1.agg);

    // Output values	
	printf("\n Name of the student : %s", s1.name);
	printf("\n Enrollment no of the student : %d", s1.en );
	printf("\n Aggregate marks of the student : %f", s1.agg );
		
}
