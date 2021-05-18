// Including some libraries
#include <cs50.h>
#include <math.h>
#include <stdio.h>

// Prompting the user to get valid input
int valid_input(void);


int main(void)
{
    // Getting valid input that has already been converted from dollar to cents
    int cents  = valid_input();




    // Finding the shortest no. of coins required to return a change
    int quarter = cents % 25;
    int a = (cents - quarter) / 25;

    int dime = quarter % 10;
    int b = (quarter - dime) / 10;

    int nickel = dime % 5;
    int c = (dime - nickel) / 5;

    // totaling the number of coins

    int coins = a + b + c + nickel;
    printf("%i\n", coins);
}


int valid_input(void)
{
    float dollars;
    do
    {
        dollars = get_float("Change owed: ");
    }
    while (dollars < 0);

    // Converting dollar to cents
    int c = round(dollars * 100);

    return c;
}