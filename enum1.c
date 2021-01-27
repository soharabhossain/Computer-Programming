// Changing default values of enum constants

enum card_type 
{
    club = 20,
    diamonds = 10,
    hearts = 50,
    spades = 30
};

void main()
{
    // creating card_type variable
    enum card_type cd;
    
	cd = club;
    printf("\n My card  %d", cd);
    
   	cd = spades;
    printf("\n My card  %d", cd);

    printf("\n Enter your card type : ");    
    scanf("%d", &cd); // actually scanning the integral values
   
    if(cd == spades)
     printf("\n I have selected spades....");
    if(cd == club)
     printf("\n I have selected club....");
    if(cd == diamonds)
     printf("\n I have selected diamonds....");
    if(cd == hearts)
     printf("\n I have selected hearts....");


}

