#include <stdio.h>
#include <string.h>
union voter
{
    char name[30];
    int age;
    int pincode;
} voter1;

int main()
{
    strcpy(voter1.name, "Rohit Sadhukhan");
    voter1.age = 21;
    voter1.pincode = 600080; // which line will be at last only that line will be execute properly other lines will be corrupted

    printf("The name of the voter is: %s\n", voter1.name);
    printf("The age of the voter is: %d\n", voter1.age);
    printf("The pincode of the voter is: %d\n", voter1.pincode);

    return 0;
}
