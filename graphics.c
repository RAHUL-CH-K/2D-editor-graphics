#ifndef GRAPHICS_H
#define GRAPHICS_H

void initializeCanvas();
void displayCanvas();
void clearCanvas();

void drawRectangle(int row, int col, int height, int width);
void drawLine(int row1, int col1, int row2, int col2);
void drawTriangle(int row, int col, int height);
void drawCircle(int centerRow, int centerCol, int radius);

#endif