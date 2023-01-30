#include <stdio.h>
int factorial(int number)
{
    if (number == 1 || number == 0)
    {
        return 1;
    }
    else
    {
        return number * factorial(number - 1);
    }
}
int main()
{
    int input;
    printf("Enter the number: ");
    scanf("%d", &input);
    printf("\nThe factorial of %d is %d", input, factorial(input));
    return 0;
}