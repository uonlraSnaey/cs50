// Write a function to replace vowels with numbers
// Get practice with strings
// Get practice with command line
// Get practice with switch

/* #include <cs50.h>
#include <stdio.h>
#include<string.h>

string replace(string input);

int main(int argc, string argv[])
{
    if(argc != 2)
    {
        printf("error");
        return 1;
    }

    string w = replace(argv[1]);
    printf("%s \n",w);

    return 0;
}

string replace(string input)
{
    string output = "";
    int length = strlen(input);
    char vowels[] = {'a', 'e', 'i', 'o'};
    char replacements[] = {'6', '3', '1', '0'};

    for (int i = 0; i < length; i++)
    {
        char current = input[i];
        bool isVowel = false;

        for (int j = 0; j < sizeof(vowels); j++)
        {
            if (current == vowels[j])
            {
                output += replacements[j];
                isVowel = true;
                break;
            }
        }

        if (!isVowel)
        {
            output += current;
        }
    }

    return output;
} */

#include <cs50.h>
#include <stdio.h>
#include <string.h>

void replace(char *input, char *output);

int main(int argc, string argv[])
{
    // 检查命令行参数数量
    if (argc != 2)
    {
        printf("Error: Please provide a single command-line argument.\n");
        return 1;
    }
    // 获取输入单词
    char *word = argv[1];
    // 创建用于存储转换后的单词的字符数组
    char convertedWord[strlen(word) + 1];

    // 调用替换函数
    replace(word, convertedWord);

    // 打印转换后的单词
    printf("%s\n", convertedWord);

    return 0;
}

void replace(char *input, char *output)
{
    int length = strlen(input);

    for (int i = 0; i < length; i++)
    {
        switch (input[i])
        {
            case 'a':
                strcat(output, "6");
                break;
            case 'e':
                strcat(output, "3");
                break;
            case 'i':
                strcat(output, "1");
                break;
            case 'o':
                strcat(output, "0");
                break;
            default:
                strncat(output, &input[i], 1);
                break;
        }
    }
}
