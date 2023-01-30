#include <stdio.h>
#define PI 3.14
#define square(r) r *r

int main()
{
    int R = 6;
    float var;
    var = PI;
    printf("The are of the circle is: %f", var * square(R));

    return 0;
}