#include <stdio.h>

int average(int a, int b)
{
    return (a + b) / 2;
}

int sum(int a, int b)
{
    return a + b;
}

void hallosum(int (*ptr)(int, int))
{
    printf("Hallo user! your result of sum is: %d\n", ptr(8, 9));
}
void halloavg(int (*ptr)(int, int))
{
    printf("Hallo user! your result of average is: %d\n", ptr(12, 6));
}

int main()
{
    int (*ptr1)(int, int);
    int (*ptr2)(int, int);

    ptr1 = sum;
    ptr2 = average;

    hallosum(ptr1);
    halloavg(ptr2);

    return 0;
}
