#include<stdio.h>
#define PI 3.14
int main()
{
    int a = 29;
    const float b = 4.007;
    //b = 3.299; //this is wrong due to constant
    printf("\n The value of a = %d and b = %f", a,b);
    //PI = 3.24; //this is wrong due to constant was defined
    printf("\n The value of PI = %f", PI);
    return 0;
}