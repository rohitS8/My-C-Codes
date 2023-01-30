#include <stdio.h>
int valuechange(int *newvalue)
{
    *newvalue = 749;
    return 0;
}

int main()
{
    int a = 45;
    printf("\nThe value of a is now %d", a);
    valuechange(&a);
    printf("\nThe value of a is now %d", a);

    return 0;
}