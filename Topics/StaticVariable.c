#include <stdio.h>
int statval()
{
    static int a = 5;
    printf("The value of static variable is: %d\n", a);
    a++;
    return 0;
}

int main()
{
    int b = 10, c;
    c = b + statval();
    c = b + statval();
    c = b + statval();
    c = b + statval(); // how many times we'll call this function the value will keep increasing

    return 0;
}