#include <stdio.h>
#include <string.h>
struct voters
{
    char name[30];
    char location[10];
    int age;
}; // p1,p2,p3 we can also declare the variables here

int main()
{
    struct voters p1, p2, p3; // we can use this local variable as a global variable by declare it outside of the main
    strcpy(p1.name, "Ram Shing");
    strcpy(p2.name, "Aman Ilias");
    strcpy(p3.name, "Shiv Ambani");
    strcpy(p1.location, "Chennai");
    strcpy(p2.location, "Mumbai");
    strcpy(p3.location, "Bhopal");
    p1.age = 23;
    p2.age = 43;
    p3.age = 35;
    printf("The name of participent 1: %s\n", p1.name);
    printf("The name of participent 2: %s\n", p2.name);
    printf("The name of participent 3: %s\n", p3.name);
    printf("The city of participent 1: %s\n", p1.location);
    printf("The city of participent 2: %s\n", p2.location);
    printf("The city of participent 3: %s\n", p3.location);
    printf("The age of participent 1: %d\n", p1.age);
    printf("The age of participent 2: %d\n", p2.age);
    printf("The age of participent 3: %d\n", p3.age);

    return 0;
}
