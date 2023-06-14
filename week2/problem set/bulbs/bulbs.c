#include <cs50.h>
#include <stdio.h>
#include <string.h>

const int BITS_IN_BYTE = 8;

void print_bulb(int bit);

int main(void)
{
    // TODO
    string input = get_string("Message: ");
    int length = strlen(input);
    for (int i = 0; i < length; i++)
    {
        int de = (int)input[i];

        for (int j = BITS_IN_BYTE - 1; j >= 0; j--)
        {
            //获取de的第j位的值，并将该值赋给变量bit；
            int bit = (de >> j) & 1;

            print_bulb(bit);
        }
    printf("\n");
    }
    printf("\n");
}

void print_bulb(int bit)
{
    if (bit == 0)
    {
        // Dark emoji
        printf("\U000026AB");
    }
    else if (bit == 1)
    {
        // Light emoji
        printf("\U0001F7E1");
    }
}
