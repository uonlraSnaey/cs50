#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height, i, j;
    do
    {
        height = get_int("Height: ");
    }
    while (height > 8 || height < 1);

    for (i = 0; i < height; i++)
    {
        for (j = 0; j < height - i - 1; j++)
        {
            printf(" ");
        }
        for (j = 0; j <= i; j++)
        {
            printf("#");
        }

        printf("  ");

        for (j = 0; j <= i; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}