#include <stdio.h>
#include <cs50.h>

int get_first_digits(long number, int num_digits);
int length(long number);
bool valid_card(long number);

int main(void)
{
    long number = get_long("Number: ");

    if (valid_card(number))
    {
        int first_digits = get_first_digits(number, 2);

        if (length(number) == 15 && (first_digits == 34 || first_digits == 37))
        {
            printf("AMEX\n");
        }
        else if (length(number) == 16 && (first_digits >= 51 && first_digits <= 55))
        {
            printf("MASTERCARD\n");
        }
        else if ((length(number) == 16 || length(number) == 13) && (first_digits / 10 == 4))
        {
            printf("VISA\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }
    else
    {
        printf("INVALID\n");
    }

    return 0;
}

int get_first_digits(long number, int num_digits)
{
    while (number >= 100)
    {
        number /= 10;
    }

    return (int) number;
}

bool valid_card(long number)
{
    int sum = 0;
    int digit_count = 0;

    while (number > 0)
    {
        int digit = number % 10;

        if (digit_count % 2 == 1)
        {
            digit *= 2;

            if (digit >= 10)
            {
                digit = digit / 10 + digit % 10;
            }
        }

        sum += digit;

        number /= 10;
        digit_count++;
    }

    return (sum % 10 == 0);
}

int length(long number)
{
    int length = 0;

    while (number > 0)
    {
        number /= 10;
        length++;
    }

    return length;
}
