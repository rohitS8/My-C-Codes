#include <stdio.h>
int main()
{
    int exam;
    printf("\n If you passed in both Math and Science press 1");
    printf("\n If you passed in Math press 2");
    printf("\n If you passed in Science press 3 \n");
    scanf("%d", &exam);

    if (exam == 1)
    {
        printf("\n You are eligible for 45k/month scholarship");
    }
    else if (exam == 2)
    {
        printf("\n You are eligible for 25k/month scholarship");
    }
    else if (exam == 3)
    {
        printf("\n You are eligible for 20k/month scholarship");
    }
    else
    {
        printf("\n Your input is invalid");
    }
    return (0);
}