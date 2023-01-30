#include <stdio.h>
typedef struct student
{
    int age;
    int number;
} sts; // here we've short the name of the structure

int pointer()
{
    typedef int *intpointer;
    intpointer a, b;
    int c = 23;
    a = &c;
    b = &c;

    printf("value of a is %d and value of b is %d", a, b);
    return 0;
} // we can also change name of pointers like this to do fast coding

int main()
{
    sts s1, s2;
    s1.age = 12;
    s2.age = 23;
    s1.number = 340;
    s2.number = 335;
    printf("Age of student 1: %d\n", s1.age);
    printf("Age of student 2: %d\n", s2.age);
    printf("Number of student 1: %d\n", s1.number);
    printf("Number of student 2: %d\n", s2.number);

    return 0;
}