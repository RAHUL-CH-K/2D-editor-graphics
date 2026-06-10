#include <stdio.h>
#include "graphics.h"

int main()
{
    int choice;
    int row, col, height, width;
    int row1, col1, row2, col2;
    int radius;

    initializeCanvas();

    while(1)
    {
        printf("\n===== 2D Graphics Editor =====\n");
        printf("1. Draw Rectangle\n");
        printf("2. Draw Line\n");
        printf("3. Draw Triangle\n");
        printf("4. Draw Circle\n");
        printf("5. Display Canvas\n");
        printf("6. Clear Canvas\n");
        printf("7. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter Row: ");
                scanf("%d", &row);

                printf("Enter Column: ");
                scanf("%d", &col);

                printf("Enter Height: ");
                scanf("%d", &height);

                printf("Enter Width: ");
                scanf("%d", &width);

                drawRectangle(row, col, height, width);
                printf("Rectangle Added!\n");
                break;

            case 2:
                printf("Enter Starting Row: ");
                scanf("%d", &row1);

                printf("Enter Starting Column: ");
                scanf("%d", &col1);

                printf("Enter Ending Row: ");
                scanf("%d", &row2);

                printf("Enter Ending Column: ");
                scanf("%d", &col2);

                drawLine(row1, col1, row2, col2);
                printf("Line Added!\n");
                break;

            case 3:
                printf("Enter Row: ");
                scanf("%d", &row);

                printf("Enter Column: ");
                scanf("%d", &col);

                printf("Enter Height: ");
                scanf("%d", &height);

                drawTriangle(row, col, height);
                printf("Triangle Added!\n");
                break;

            case 4:
                printf("Enter Center Row: ");
                scanf("%d", &row);

                printf("Enter Center Column: ");
                scanf("%d", &col);

                printf("Enter Radius: ");
                scanf("%d", &radius);

                drawCircle(row, col, radius);
                printf("Circle Added!\n");
                break;

            case 5:
                displayCanvas();
                break;

            case 6:
                clearCanvas();
                printf("Canvas Cleared!\n");
                break;

            case 7:
                printf("Exiting Program...\n");
                return 0;

            default:
                printf("Invalid Choice! Try Again.\n");
        }
    }

    return 0;
}