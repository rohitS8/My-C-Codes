#include <stdio.h>
int sum(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}

int main()
{
    int x = 4, y = 3;
    printf("\nThe sum of x and y is: %d", sum(x, y));
    printf("\nThe substaction of x and y is: %d", sub(x, y));

    return 0;
}