#include <stdio.h>

int sum(int a, int b)
{
    return a + b;
}

int main()
{
    int x, y;
    printf("Enter value 1: \n");
    scanf("%d", &x);
    printf("Enter value 2: \n");
    scanf("%d", &y);
    int (*funcptr)(int, int);
    funcptr = sum;
    int d = (*funcptr)(x, y);
    printf("Result: %d\n", d);

    return 0;
}