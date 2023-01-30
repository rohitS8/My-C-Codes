#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include<string.h>

int randomvalue(int n)
{
    srand(time(NULL));
    return rand() % n;
}

int game(char comp, char player)
{
    // draw=-1,computer win=1,computer lose=0
    if (comp == player)
    {
        return -1;
    }
    else if ((comp == 'r') && (player == 's'))
    {
        return 1;
    }
    else if ((comp == 's') && (player == 'r'))
    {
        return 0;
    }
    else if ((comp == 'p') && (player == 's'))
    {
        return 0;
    }
    else if ((comp == 's') && (player == 'p'))
    {
        return 1;
    }
    else if ((comp == 'r') && (player == 'p'))
    {
        return 0;
    }
    else if ((comp == 'p') && (player == 'r'))
    {
        return 1;
    }
}

int main()
{
    int choice, cscore = 0, pscore = 0;
    char username[20];
    char playerchar, compchar;
    char decision[] = {'r', 'p', 's'};

    printf("Enter Your Name: ");
    gets(username);
    

    for (int i = 0; i < 5; i++)
    {
        printf("\n\nHey %s! Choose\n1.Rock \n2.Paper \n3.Scissor", username);
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        getchar();
        playerchar = decision[choice - 1];
        printf("\nYou choose: %c", playerchar);

        printf("\n\n~Computer's turn~ ");
        choice = randomvalue(3);
        compchar = decision[choice];
        printf("\nComputer choose: %c", compchar);

        if (game(compchar, playerchar) == -1)
        {
            printf("\n\nThis rounnd is draw");
            cscore += 0;
            pscore += 0;
            printf("\n%s = %d\nComputer = %d", username, pscore, cscore);
        }
        else if (game(compchar, playerchar) == 1)
        {
            printf("\n\nComputer win this round!");
            cscore += 1;
            printf("\n%s = %d\nComputer = %d", username, pscore, cscore);
        }
        else
        {
            printf("\n\n%s win this round!", username);
            pscore += 1;
            printf("\n%s = %d\nComputer = %d", username, pscore, cscore);
        }
    }

    if (pscore > cscore)
    {
        printf("\n\n%s won this match!", username);
    }
    else if (pscore == cscore)
    {
        printf("\n\nThis match is draw.");
    }
    else
    {
        printf("\n\nComputer won this match!");
    }

    return 0;
}