#include <stdio.h>
int main()
{
    int input1, n, j;

    printf("\nPress 0 to see triangular star print\nPress 1 to see reverse triangular star print: ");
    scanf("%d", &input1);

    switch (input1)
    {
    case 0:

        printf("\nEnter the number of rows: ");
        scanf("%d", &n);

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j <= i; j++)
            {
                printf("*\t", j);
            }

            printf("\n", i);
        }

        break;

    case 1:

        printf("\nEnter the number of rows: ");
        scanf("%d", &n);

        for (int i = 0; i < n; i++)
        {

            for (int j = 0; j <= n - i - 1; j++)
            {
                printf("*\t", j);
            }

            printf("\n", i);
        }

        break;

    default:

        printf("Your input is invalid");

        break;
    }

    return 0;
}