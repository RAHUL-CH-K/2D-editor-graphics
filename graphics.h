#include <stdio.h>
#include <math.h>
#include "graphics.h"

#define ROWS 20
#define COLS 40

char canvas[ROWS][COLS];

/* Initialize Canvas */
void initializeCanvas()
{
    int i, j;

    for(i = 0; i < ROWS; i++)
    {
        for(j = 0; j < COLS; j++)
        {
            canvas[i][j] = '_';
        }
    }
}

/* Display Canvas */
void displayCanvas()
{
    int i, j;

    for(i = 0; i < ROWS; i++)
    {
        for(j = 0; j < COLS; j++)
        {
            printf("%c", canvas[i][j]);
        }
        printf("\n");
    }
}

/* Draw Rectangle */
void drawRectangle(int row, int col, int height, int width)
{
    int i, j;

    for(i = row; i < row + height; i++)
    {
        for(j = col; j < col + width; j++)
        {
            if(i == row ||
               i == row + height - 1 ||
               j == col ||
               j == col + width - 1)
            {
                canvas[i][j] = '*';
            }
        }
    }
}

/* Draw Line */
void drawLine(int row1, int col1, int row2, int col2)
{
    int i;

    if(row1 == row2)
    {
        for(i = col1; i <= col2; i++)
        {
            canvas[row1][i] = '*';
        }
    }
    else if(col1 == col2)
    {
        for(i = row1; i <= row2; i++)
        {
            canvas[i][col1] = '*';
        }
    }
}

/* Draw Triangle */
void drawTriangle(int row, int col, int height)
{
    int i, j;

    for(i = 0; i < height; i++)
    {
        for(j = 0; j <= i; j++)
        {
            if(i == height - 1 || j == 0 || j == i)
            {
                canvas[row + i][col + j] = '*';
            }
        }
    }
}

/* Draw Circle */
void drawCircle(int centerRow, int centerCol, int radius)
{
    int x, y;

    for(x = 0; x < ROWS; x++)
    {
        for(y = 0; y < COLS; y++)
        {
            int dx = x - centerRow;
            int dy = y - centerCol;

            int distance = dx * dx + dy * dy;

            if(distance >= radius * radius - 2 &&
               distance <= radius * radius + 2)
            {
                canvas[x][y] = '*';
            }
        }
    }
}
void clearCanvas()
{
    int i, j;

    for(i = 0; i < 20; i++)
    {
        for(j = 0; j < 40; j++)
        {
            canvas[i][j] = '_';
        }
    }
}