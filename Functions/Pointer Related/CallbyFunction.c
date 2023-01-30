#include<stdio.h>

int sum(int a, int b)
{
    return a+b;
}

int average(int a,int b)
{
    return (a+b)/2;
}

void hallosum(int (*ptr) (int,int))
{
    printf("Hallo user! The result is: %d\n", ptr(8,9));
}

void halloavg(int (*ptr) (int,int))
{
    printf("Hallo user! The result is: %d\n", ptr(4,4));
}

int main()
{
    int (*ptr1)(int,int);
    int (*ptr2)(int,int);
    ptr1 = average;
    ptr2 = sum;
    
    halloavg(ptr1);
    hallosum(ptr2);
return 0;
}