#include <math.h>

#include "helpers.h"

// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            int rgbt = round((image[i][j].rgbtRed + image[i][j].rgbtGreen + image[i][j].rgbtBlue) / 3.0);
            image[i][j].rgbtRed = image[i][j].rgbtGreen = image[i][j].rgbtBlue = rgbt;
        }
    }
}

// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width])
{
    RGBTRIPLE tmp;
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width / 2; j++)
        {
            tmp = image[i][j];
            image[i][j] = image[i][width - 1 - j];
            image[i][width - 1 - j] = tmp;
        }
    }
    return;
}

// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{
    RGBTRIPLE tmp[height][width];
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            double sr = 0, sg = 0, sb = 0, cnt = 0;
            for (int row = -1; row <= 1; row++)
            {
                for (int col = -1; col <= 1; col++)
                {
                    if (i + row < 0 || i + row > height - 1)
                    {
                        continue;
                    }
                    if (j + col < 0 || j + col > width - 1)
                    {
                        continue;
                    }
                    cnt++;
                    sr += image[i + row][j + col].rgbtRed;
                    sg += image[i + row][j + col].rgbtGreen;
                    sb += image[i + row][j + col].rgbtBlue;
                }
            }
            tmp[i][j].rgbtRed = round(sr / cnt);
            tmp[i][j].rgbtGreen = round(sg / cnt);
            tmp[i][j].rgbtBlue = round(sb / cnt);
        }
    }

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            image[i][j] = tmp[i][j];
        }
    }
    return;
}

// Detect edges
void edges(int height, int width, RGBTRIPLE image[height][width])
{
    RGBTRIPLE tmp[height][width];
    double sobelx[9] = {-1, 0, 1, -2, 0, 2, -1, 0, 1};
    double sobely[9] = {-1, -2, -1, 0, 0, 0, 1, 2, 1};
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            int cnt = -1;
            double rx = 0, ry = 0, gx = 0, gy = 0, bx = 0, by = 0;
            for (int row = -1; row <= 1; row++)
            {
                for (int col = -1; col <= 1; col++)
                {
                    cnt++;
                    if (i + row < 0 || i + row > height - 1)
                    {
                        continue;
                    }
                    if (j + col < 0 || j + col > width - 1)
                    {
                        continue;
                    }
                    rx += sobelx[cnt] * image[i + row][j + col].rgbtRed;
                    ry += sobely[cnt] * image[i + row][j + col].rgbtRed;
                    gx += sobelx[cnt] * image[i + row][j + col].rgbtGreen;
                    gy += sobely[cnt] * image[i + row][j + col].rgbtGreen;
                    bx += sobelx[cnt] * image[i + row][j + col].rgbtBlue;
                    by += sobely[cnt] * image[i + row][j + col].rgbtBlue;
                }
            }
            int redValue = round(sqrt(rx * rx + ry * ry));
            if (redValue > 255)
            {
                tmp[i][j].rgbtRed = 255;
            }
            else
            {
                tmp[i][j].rgbtRed = redValue;
            }

            int greenValue = round(sqrt(gx * gx + gy * gy));
            if (greenValue > 255)
            {
                tmp[i][j].rgbtGreen = 255;
            }
            else
            {
                tmp[i][j].rgbtGreen = greenValue;
            }

            int blueValue = round(sqrt(bx * bx + by * by));
            if (blueValue > 255)
            {
                tmp[i][j].rgbtBlue = 255;
            }
            else
            {
                tmp[i][j].rgbtBlue = blueValue;
            }
        }
    }

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            image[i][j] = tmp[i][j];
        }
    }
    return;
}