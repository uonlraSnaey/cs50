#include <cs50.h>
#include <stdio.h>

int get_cents(void);
int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickels(int cents);
int calculate_pennies(int cents);

int main(void)
{
    // Ask how many cents the customer is owed
    int cents = get_cents();

    // Calculate the number of quarters to give the customer
    int quarters = calculate_quarters(cents);
    cents = cents - quarters * 25;

    // Calculate the number of dimes to give the customer
    int dimes = calculate_dimes(cents);
    cents = cents - dimes * 10;

    // Calculate the number of nickels to give the customer
    int nickels = calculate_nickels(cents);
    cents = cents - nickels * 5;

    // Calculate the number of pennies to give the customer
    int pennies = calculate_pennies(cents);
    cents = cents - pennies * 1;

    // Sum coins
    int coins = quarters + dimes + nickels + pennies;

    // Print total number of coins to give the customer
    printf("%i\n", coins);
}

int get_cents(void)
{
    int cents;
    do
    {
        cents = get_int("Changed owed:");
    }
    while (cents < 0);
    return cents;
}

int calculate_quarters(int cents)
{
    // TODO
    int std = 25;
    //25
    if (cents == std)
    {
        return cents / std;
    }
    //25-49
    else if (cents >= (std * 1) + 1 && cents <= (std * 2) - 1)
    {
        return (cents / std);
    }
    //50-74
    else if (cents >= (std * 2) && cents <= (std * 3) - 1)
    {
    return (cents / std);
    }
    //75-99
    else if (cents >= (std * 3) && cents <= (std * 4) - 1)
    {
        return (cents / std);
    }
    //100-124
    else if (cents >= (std * 4) && cents <= (std * 5) - 1)
    {
    return (cents / std);
    }
    //125-149
    else if (cents >= (std * 5) && cents <= (std * 6) - 1)
    {
    return (cents / std);
    }
    //150-174
    else if (cents >= (std * 6) && cents <= (std * 7) - 1)
    {
        return (cents / std);
    }
    return 0;
}

int calculate_dimes(int cents)
{
    // TODO
    int std = 10;
    //10
    if (cents == std)
    {
        return cents / std;
    }
    //11-19
    else if (cents >= std + 1 && cents <= (std * 2) - 1)
    {
        return (cents / std);
    }
    //20-29
    else if (cents >= std * 2  && cents <= (std * 3) - 1)
    {
        return (cents / std);
    }
    return 0;
}

int calculate_nickels(int cents)
{
    // TODO
    int std = 5;
    //5
    if (cents == std)
    {
        return (cents / std);
    }
    //6-9
    else if (cents >= (std * 1) + 1 && (std * 2) - 1)
    {
        return (cents / std);
    }
    return 0;
}

int calculate_pennies(int cents)
{
    // TODO
    int std = 1;
    //1
    if (cents == std)
    {
        return (cents / std);
    }
    //2-5
    else if (cents >= 2 && cents < 5)
    {
        return cents;
    }
    return 0;
}
