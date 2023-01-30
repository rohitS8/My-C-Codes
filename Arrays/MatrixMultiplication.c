#include <stdio.h>

int main()
{
    int inpr1, inpc1, inpr2, inpc2, sum = 0;
    int m1[inpr1][inpc1], m2[inpr2][inpc2], result[inpr1][inpc2];
    printf("Enter the number of rows of your 1st matrix:");
    scanf("%d", &inpr1);
    printf("Enter the number of coloumns of your 1st matrix:");
    scanf("%d", &inpc1);
    printf("Enter the number of rows of your 2nd matrix:");
    scanf("%d", &inpr2);
    printf("Enter the number of coloumns of your 2nd matrix:");
    scanf("%d", &inpc2);

    if (inpc1 == inpr2)
    {
        for (int i = 0; i < inpr1; i++)
        {
            for (int j = 0; j < inpc1; j++)
            {
                printf("Enter value for place (%d,%d) of 1st matrix: ", i, j);
                scanf("%d", &m1[i][j]);
            }
        }

        for (int i = 0; i < inpr2; i++)
        {
            for (int j = 0; j < inpc2; j++)
            {
                printf("Enter value for place (%d,%d) of 2nd matrix: ", i, j);
                scanf("%d", &m2[i][j]);
            }
        }

        for (int i = 0; i < inpr1; i++)
        {
            for (int j = 0; j < inpc2; j++)
            {
                for (int k = 0; k < inpc1; k++)
                {
                    sum += m1[i][k] * m2[k][j];
                }

                result[i][j] = sum;
                sum = 0;
            }
        }

        for (int i = 0; i < inpr1; i++)
        {
            for (int j = 0; j < inpc2; j++)
            {
                printf("%d\t", result[i][j]);
            }
            printf("\n");
        }
    }

    else
    {
        printf("This multiplication is not possible.");
    }

    return 0;
}