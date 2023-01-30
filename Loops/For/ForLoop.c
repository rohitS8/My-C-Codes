#include <stdio.h>
int main()
{
    int num1, num2, i, j;
    printf("Enter the number:\n");
    scanf("%d %d", &num1, &num2);
    for (i = 0, j = 0; i < num1, j < num2; i++, j++)
    {
        printf("\n%d %d", i, j);
    }
    return (0);
}