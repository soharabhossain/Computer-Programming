/*
Enumeration is a user defined datatype in C language. 
An enumeration type (also called enum) is a data type that consists of integral constants.
It is used to assign names to the integral constants which makes a program easy to read and maintain. 
The keyword “enum” is used to declare an enumeration.

Default integer assignments starts from 0

*/


enum week_day 
{
 Sunday, 
 Monday, 
 Tuesday, 
 Wednesday, 
 Thursday, 
 Friday, 
 Saturday
};

void main()
{
    // creating today variable of enum week type
    enum week_day today;
    
	today = Wednesday;
    printf("\n Day %d", today);
    
   	today = Monday;
    printf("\n Day %d", today);
    
}



