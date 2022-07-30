#include <cs50.h>
#include <stdio.h>

int get_cents(void);

int main(void)
{
    // Ask how many cents the customer is owed

    int cents = get_int("How many cents are owed? ");

    while (cents > 99 || cents < 1 ) {
        printf("Please enter a value between 1 and 99\n");
        cents = get_int("How many cents are owed? ");
    }

    // Calculates the number of quarters to give the customer

    int quarters = (cents/25);

    // Calculates the number of dimes to give the customer

    int dimes = ((cents-(quarters*25))/10);

    // Calculates the number of nickels to give the customer

    int nickels = ((cents-(quarters*25+dimes*10))/5);

    // Calculates the number of pennies to give the customer

    int pennies = (cents-(quarters*25+dimes*10+nickels*5));

    // Sum of coins
    int coins = quarters + dimes + nickels + pennies;

    // Print total number of coins to give the customer and how many of each
    printf("%i Coins total\n", coins);
    printf("%i Quarters, ", quarters);
    printf("%i Dimes, ", dimes);
    printf("%i Nickels, ", nickels);
    printf("%i Pennies\n", pennies);
}

