#include <cs50.h>
#include <stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>

int letterCount(string text);
int wordCount(string text);
int sentCount(string text);

int main(void)
{
    string text = get_string("Text: ");
    int letters_sum = letterCount(text);
    int words_sum = wordCount(text);
    int sentence_sum = sentCount(text);

    float S = (float)sentence_sum / words_sum * 100;
    float L = (float)letters_sum / words_sum * 100;

    int index = round(0.0588 * L - 0.296 * S -15.8);

    if (index > 16)
    {
        printf("Grade 16+\n");
    }
    else if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else
    {
        printf("Grade %d\n",index);
    }
}

int letterCount(string text)
{
    int count = 0;
    int i = 0;
    do
    {
        if(isalpha(text[i]))
        {
            count++;
        }
        i++;
    }
    while(i < strlen(text));

    return count;
}

int wordCount(string text)
{
    int count = 1;
    int i = 0;
    /* for (int i = 0; i < strlen(text); i++)
    {
        if (text[i] == ' ')
        {
            count++;
        }
    } */
    do
    {
        if (text[i] == ' ')
        {
            count++;
        }
        i++;
    }
    while (i < strlen(text));
    return count;
}

int sentCount(string text)
{
    int count = 0;
    int i = 0;

    while (text[i] != '\0')
    {
        if(text[i] == '.' || text[i] == '!' || text[i] == '?')
        {
            count++;
        }
        i++;
    }
    return count;
}