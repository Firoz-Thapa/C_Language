#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    int player, computer = (rand() % 3) + 0;

    /*
    0 --> snake
    1 --> water
    2 --> gun
    */
    printf("Choose 0 for snake, 1 for water and 2 for gun \n");
    scanf("%d", &player);
    printf("Computer choose%d \n", computer );

    if (player == 0 && computer == 0)
    {
        printf("Its a draw! \n");
    }
    else if (player == 0 && computer == 1)
    {
        printf("you win! \n");
    }
    else if (player == 0 && computer == 2)
    {
        printf("you lose! \n");
    }
    else if (player == 1 && computer == 0)
    {
        printf("you lose! \n");
    }
    else if (player == 1 && computer == 1)
    {
        printf("Its a draw! \n");
    }
    else if (player == 1 && computer == 2)
    {
        printf("you win! \n");
    }
    else if (player == 2 && computer == 0)
    {
        printf("you win! \n");
    }
    else if (player == 2 && computer == 1)
    {
        printf("you lose! \n");
    }
    else if (player == 2 && computer == 2)
    {
            printf("Its a draw! \n");
        }

        else{
            printf("Something went wrong!!!!!");
        }
        return 0;
    }