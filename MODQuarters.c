#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

int quarters;
int bet;
int num;
//MODS
int WelcomeMSG(int quarters)
{
	printf("Welcome to the Betting Game!\n");
	printf("You have $%d worth of quarters.\n\n", quarters / 4);
}
int Bet(int bet1, int quarters)
{
  
        
    while (quarters > 0)
    {
       
      
        printf("You have %d quarters ($%.2f).\n", quarters, quarters * .25);
        printf("Enter the number of quarters to bet (or 0 to cash out): ");
        scanf("%d", &bet);
        
        if (bet == '0')
        {
            //printf("Cashing out. You ended with $%.2f.\n", quarters * .25);
            return bet, quarters;
        }
        if (bet > quarters)
            {
             printf("Invalid bet. Please enter a valid number of quarters. \n\n");

            }else
            {
                return bet, quarters;
            }

    }    

}

    int validBET(int bet, int num, int quarters1)
    {
       if (bet == 0)
       {
        return bet, num, quarters;
       }else if (num >= 95)
        {
            printf("Reel stopped on the number: %d \n", num);
            quarters = (quarters - bet);
            printf("Jackpot! You triple your money!\n\n");
            quarters = (quarters + (bet * 3));
            
            return bet, num, quarters;
        }
        else if (num < 50)
        {

            printf("Reel stopped on the number: %d \n", num);
            printf("You lose!\n\n");
            quarters = (quarters - bet);
          
            return bet, num, quarters;
        }
        else if ((num >= 51) && (num <= 74))
        {

            printf("Reel stopped on the number: %d \n", num);
            quarters = (quarters - bet);
            printf("You get your money back! \n\n");
            quarters = (quarters + bet);
         
           return bet, num, quarters;

        }
        else if ((num >= 75) && (num <= 94))
        {

            printf("Reel stopped on the number: %d \n", num);
            quarters = (quarters - bet);
            printf("You doubled your money! \n\n");
            quarters = (quarters + (bet * 2));
            
           return bet, num, quarters;
        }


    }


int main(void)
{
	

	WelcomeMSG(quarters = 80);
    do 
    {
        srand(time(NULL));
        
      Bet(bet, quarters);
      validBET(bet, num = (rand() % (100 + 1)), quarters);
         if (quarters == 0) 
             {
                printf("Game Over\n");
                    return 0;
             }
    }while (bet != 0);
    
       printf("Cashing out. You ended with $%.2f.\n", quarters * .25);
    
    return 0;
}
