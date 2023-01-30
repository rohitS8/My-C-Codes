#include <stdio.h>
int main()
{
    int number, index = 0;
    printf("\nEnter the number:");
    scanf("%d", &number);

    do
    {
        printf("\n %d", index + 1); //we can write only index if we want to print it from 0

        index = index + 1;
    } while (index < number);
    return (0);
}