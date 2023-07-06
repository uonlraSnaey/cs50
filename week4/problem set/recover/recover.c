#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

typedef uint8_t BYTE;
const int BLOCK_SIZE = 512;

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("用法：./recover IMAGE\n");
        return 1;
    }

    FILE *input = fopen(argv[1], "r");
    if (input == NULL)
    {
        printf("无法打开文件。\n");
        return 1;
    }

    BYTE buffer[BLOCK_SIZE];
    int cnt = 0;
    FILE *output = NULL;
    char filename[8];

    // 循环读取 512 字节到缓冲区
    while (fread(&buffer, BLOCK_SIZE, 1, input))
    {
        // 检查是否为新 JPEG 的起始
        if (buffer[0] == 0xff && buffer[1] == 0xd8 && buffer[2] == 0xff && (buffer[3] & 0xf0) == 0xe0)
        {
            // 检查是否为第一个 JPEG 文件
            if (cnt)
            {
                fclose(output);
            }

            // 生成 JPEG 文件名
            sprintf(filename, "%03i.jpg", cnt);
            output = fopen(filename, "w");
            cnt++;
        }

        // 已找到 JPEG 文件
        if (cnt)
        {
            fwrite(&buffer, BLOCK_SIZE, 1, output);
        }
    }

    fclose(input);
    fclose(output);
    return 0;
}
