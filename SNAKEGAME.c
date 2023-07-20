// C program to build snake game
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include <windows.h>
#include <process.h>
#include <string.h>

int i, j, height = 30, width = 30;
int gameover, score;
int x, y, fruitx, fruity, flag;

// Function to generate the fruit and within the boundary
void setup()
{
    gameover = 0;

    // Stores height and width
    x = height / 2;
    y = width / 2;
label1:
    fruitx = rand() % 20;
    if (fruitx == 0)
        goto label1;
label2:
    fruity = rand() % 20;
    if (fruity == 0)
        goto label2;
    score = 0;
}

// Function to draw the boundaries
void draw()
{
    system("cls");
    for (i = 0; i < height; i++)
    {
        for (j = 0; j < width; j++)
        {
            if (i == 0 || i == width - 1 || j == 0 || j == height - 1)
            {
                printf("#");
            }
            else
            {
                if (i == x && j == y)
                    printf("0");
                else if (i == fruitx && j == fruity)
                    printf("*");
                else
                    printf(" ");
            }
        }
        printf("\n");
    }

    // Print the score after the game ends
    printf("score = %d", score);
    printf("\n");
    printf("press X to quit the game");
}

// Function to take the input from the user
void input()
{
    if (kbhit())
    {
        switch (getch())
        {
        case 'a':
            flag = 1;
            break;
        case 's':
            flag = 2;
            break;
        case 'd':
            flag = 3;
            break;
        case 'w':
            flag = 4;
            break;
        case 'x':
            gameover = 1;
            break;
        }
    }
}

// Function for the logic behind each movement
void logic()
{
    for (int i = 0; i < (1000000); i++)
    {
        ;
    }
    switch (flag)
    {
    case 1:
        y--;
        break;
    case 2:
        x++;
        break;
    case 3:
        y++;
        break;
    case 4:
        x--;
        break;
    default:
        break;
    }

    // If the game is over
    if (x < 0 || x > height || y < 0 || y > width)
        gameover = 1;

    // If snake reaches the fruit
    // then update the score
    if (x == fruitx && y == fruity)
    {
    label3:
        fruitx = rand() % 20;
        if (fruitx == 0)
            goto label3;

    // After eating the above fruit
    // generate new fruit
    label4:
        fruity = rand() % 20;
        if (fruity == 0)
            goto label4;
        score += 10;
    }
}

// Function to print the game rules
void Print()
{

    system("cls");
    printf("                      @@@@@-----*****BOTTLE GAMES PRESENTS*****-----@@@@@\n");
    sleep(5);
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("                            #####$$$$$-----SNAKE GAME-----$$$$$#####\n");
    sleep(5);
    printf("\tWelcome to the mini Snake game.(press any key to continue)\n");
    getch();
    system("cls");
    printf("\tGame instructions:\n");
    printf("\n->Use W A S D to move the snake (0) Up , Left , Down and Right respectively\n");
    printf("->You will be provided with food (*) at several coordinates of the screen which you have to eat\n");
    printf("->Everytime you eat the food the score increases\n");
    printf("->When snake touches the walls you loose and is the end of the game\n");
    printf("->If you want to exit the game press x\n");
    printf("\n\nPress any key to play game...");
    if (getch() == 27)
        exit(0);
}

void gotoxy(int x, int y)
{

    COORD coord;

    coord.X = x;

    coord.Y = y;

    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
// Function to print loading screen
void load()
{
    int row, col, r, c, q;
    gotoxy(36, 14);
    printf("loading...");
    gotoxy(30, 15);
    for (r = 1; r <= 20; r++)
    {
        for (q = 0; q <= 100000000; q++)
            ; // to display the character slowly
        printf("%c", 177);
    }
    getch();
}

// Driver Code
void main()
{

    int m, n;
    Print();

    load();

    // Generate boundary
    setup();

    // Until the game is over

    while (!gameover)
    {

        // Function Call
        draw();
        input();
        logic();
    }
}
