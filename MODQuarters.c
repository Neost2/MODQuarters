#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

#define VALID_INPUT    1
#define INVALID_INPUT  0

//MODS
void WelcomeMSG(double cash)
{
	
	printf("Welcome to the Betting Game!\n");
	printf("You have $%.0f worth of quarters.\n\n", cash);
}
int Bet(int bet, int valid_input, int quarters, double cash)
{
    char input[4] = bet;


    while (1)
    {

        printf("You have %i quarters ($%.2f).\n", quarters, cash);
        printf("Enter the number of quarters to bet (or 0 to cash out): ");
        fgets(input, sizeof(input), stdin);
        if (input[0] == '0')
        {
            printf("Cashing out. You ended with $%.2f.\n", cash);
            return bet, valid_input, quarters, cash;
        }

        for (int i = 0; input[i] != '\0'; i++) {
            if (input[i] == '\n') {
                input[i] = '\0';
                break;
            }
            if (!isdigit(input[i]) && input[i] != '-') {
                valid_input = INVALID_INPUT;
                break;
            }
            double toohigh = (atoi(input) * real_bet1);
            if (toohigh > cash)
            {
                valid_input = INVALID_INPUT;
                break;
            }
        }
        if (valid_input = VALID_INPUT)
        {
            bet = atoi(input);
            return bet, valid_input, quarters, cash;
        }else
        {
            printf("Invalid bet. Please enter a valid number of quarters. \n\n");
        }

        }
    }
}

    int validBET(int bet, int num, int valid_input double cash)
    {
        double real_bet;
        real_bet = (bet * .25);
      


        if (valid_input && num >= 95)
        {
            printf("Reel stopped on the number: %.0lf \n", num);
            cash = (cash - real_bet);
            printf("Jackpot! You triple your money!\n\n");
            cash = (cash + (real_bet * 3));
        }
        else if (num1 < 50)
        {

            printf("Reel stopped on the number: %.0lf \n", num1);
            printf("You lose!\n\n");
            cash = (cash - real_bet);

        }
        else if ((num1 >= 51) && (num1 <= 74))
        {

            printf("Reel stopped on the number: %.0lf \n", num1);
            cash = (cash - real_bet);
            printf("You get your money back! \n\n");
            cash = (cash + real_bet);


        }
        else if ((num1 >= 75) && (num1 <= 94))
        {

            printf("Reel stopped on the number: %.0lf \n", num1);
            cash = (cash - real_bet);
            printf("You doubled your money! \n\n");
            cash = (cash + (real_bet * 2));

        }


    }


int main(void)
{
	double cash = 20;
    int quarters = cash * 4;
    int valid_input = VALID_INPUT;
    int bet = 1;
    int num;

    srand(time(NULL));
    num1 = (rand() % (100 - 1 + 1));

	void WelcomeMSG(cash);
    while (bet != 0)
    {
        int Bet(bet, valid_input, quarters, cash);
        if (bet != 0)
        {
            int realBET(bet, num, valid_input, cash);
        }
        else
        {
            return 0;
        }
         if (cash == 0) 
             {
                printf("Game Over\n");
                    return 0;
             }
    }
    return 0;
}