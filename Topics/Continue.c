#include <stdio.h>
int main()
{
    int age, i;
    for (i = 0; i < 10; i++)
    {
        printf("\nEnter your age:\t");
        scanf("%d", &age);
        if (age < 10)
        {
            continue;
        }
        printf("\nYou are Eligible");

        return (0);
    }
}