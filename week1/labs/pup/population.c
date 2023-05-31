#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int year, sat, end;
    // TODO: Prompt for start size
    printf("start size:");
    scanf("%d", &sat);
    while (sat < 9){
        printf("start size:");
        scanf("%d", &sat);
    }
    // TODO: Prompt for end size
    do{
        printf("end size:");
        scanf("%d", &end);
    }while (end < sat);
    // TODO: Calculate number of years until we reach threshold
    for (year = 1 ; sat < end; year++){
        sat = sat + (sat / 3) - (sat / 4);
    }
    // TODO: Print number of years
    printf("Years: %d \n", year - 1);
}
