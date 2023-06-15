#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int convert(string input);

int main(void)
{
    string input = get_string("Enter a positive integer: ");

    for (int i = 0, n = strlen(input); i < n; i++)
    {
        if (!isdigit(input[i]))
        {
            printf("Invalid Input!\n");
            return 1;
        }
    }

    // Convert string to int
    printf("%i\n", convert(input));
}

int convert(string input)
{
    // TODO

/*     if (strlen(input) == 1) {
        return atoi(input);
    }

    //取输入字符串 input 的最后一个字符,字符减去 '0'得到对应数字的整数值。
    int last_digits = input[strlen(input) - 1] - '0';
    //动态分配内存的函数调用
    string remain = malloc(strlen(input) + 1);
    //源字符串 input 中除去最后一个字符的部分拷贝到目标字符串 remaining 中。
    strncpy(remain, input, strlen(input) - 1);
    //实现递归
    int converted = convert(remain);

    free(remain);//释放动态分配的内存

    return converted * 10 + last_digits;
*/

    return atoi(input);
}