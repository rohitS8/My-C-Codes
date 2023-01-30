#include <stdio.h>
int main()
{
    void *ptr;
    int a = 80;
    float b = 8.67;
    ptr = &a;
    printf("The value of a is %d\n", *((int *)ptr));
    ptr = &b;
    printf("The value of b is %.2f", *((float *)ptr));

    return 0;
}