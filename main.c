#include <stdio.h>
#include <stdlib.h>

{
    system("clear");
    printf("         |         |          \n");
    printf("         |         |          \n");
    printf("    %c    |    %c    |    %c    \n", boxes[0], boxes[1], boxes[2]);
    printf("         |         |          \n");
    printf("_________|_________|__________\n");
    printf("         |         |          \n");
    printf("         |         |          \n");
    printf("    %c    |    %c    |    %c    \n", boxes[3], boxes[4], boxes[5]);
    printf("         |         |          \n");
    printf("_________|_________|__________\n");
    printf("         |         |          \n");
    printf("         |         |          \n");
    printf("    %c    |    %c    |    %c    \n", boxes[6], boxes[7], boxes[8]);
    printf("         |         |          \n");
    printf("         |         |          \n");
}

void askPlayerBox(char boxes[], int *player, int *chosenBox)
{

    do
    {
        printf("Player %d, chose a box to play on: ", *player);
        scanf("%d", chosenBox);
    } while (boxes[*chosenBox - 1] == 'O' || boxes[*chosenBox - 1] == 'X');
}

void storePlay(char boxes[], int *player, int chosenBox)
{
    if (*player)
    {
        boxes[chosenBox - 1] = 'O';
        *player = *player - 1;
    }
    else
    {
        boxes[chosenBox - 1] = 'X';
        *player = *player + 1;
    }
}

void main(void)
{
    char boxes[] = {"123456789"};
    int chosenBox;
    int player = 0;
    int isFinished = 9;

    while (isFinished)
    {
        printBoard(boxes);
        askPlayerBox(boxes, &player, &chosenBox);
        storePlay(boxes, &player, chosenBox);
        isFinished--;
    }
    printBoard(boxes);
}