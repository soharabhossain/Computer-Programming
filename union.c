
/*
A union is a special data type available in C that allows 
to store different data types in the same memory location. 

You can define a union with many members, 
but only one member can contain a value at any given time. 

Unions provide an efficient way of using the same memory location for multiple-purpose.

Example:

union photo_id
{
 char passport[10];
 char aadhaar[13];
 char driving_license[20];
}pid1, pid2;

*/


// structure - user-defined data type
struct my_struct 
{
   int attrib1;
   float attrib2;
   char attrib3[20];
};

struct my_struct s;




// Example - defining and access union data-type

union my_data 
{
   int attrib1;
   float attrib2;
   char attrib3[20];
};

void main( ) 
{

   printf( "\n Memory size occupied by struct is  %d bytes. \n", sizeof(s));

   union my_data u;        
   printf( "\n Memory size occupied by union my_data is  %d bytes. \n", sizeof(u));

  
   // Access Union data
   // final value assigned to the member attribute has occupied the memory location
   // herefore, the last set attribute holds meaningful values

   printf("\n\n Variable set the last holds meaningful value....\n");

   u.attrib1 = 50;
   u.attrib2 = 120.5;
   strcpy(u.attrib3, "HLL Programming");

   printf( "\n u.attrib1 : %d", u.attrib1);
   printf( "\n u.attrib2 : %f", u.attrib2);
   printf( "\n u.attrib3 : %s", u.attrib3);
   

   printf("\n\n Accessing variables one at a time.....\n");
 
   // Accessing variables one at a time
   u.attrib1 = 100;
   printf( "\n u.attrib1 : %d", u.attrib1);

   u.attrib2 = 250.5;
   printf( "\n u.attrib1 : %f", u.attrib2);

   strcpy( u.attrib3, "C is a HLL Programming Language");
   printf( "\n u.attrib1 : %s", u.attrib3);
  
}
