#include <stdio.h>
#include <string.h>

struct drivers
{
    char name[30];
    char address[30];
    char license[30];
    int distance;

} d1, d2, d3;

int main()
{
    printf("\nEnter details of Driver 1\n");
    printf("Name: ");
    scanf("%s", &d1.name);
    printf("Address: ");
    scanf("%s", &d1.address);
    printf("License Number: ");
    scanf("%s", &d1.license);
    printf("Driven Kilometers: ");
    scanf("%d", &d1.distance);

    printf("\nEnter details of Driver 2\n");
    printf("Name: ");
    scanf("%s", &d2.name);
    printf("Address: ");
    scanf("%s", &d2.address);
    printf("License Number: ");
    scanf("%s", &d2.license);
    printf("Driven Kilometers: ");
    scanf("%d", &d2.distance);

    printf("\nEnter details of Driver 3\n");
    printf("Name: ");
    scanf("%s", &d3.name);
    printf("Address: ");
    scanf("%s", &d3.address);
    printf("License Number: ");
    scanf("%s", &d3.license);
    printf("Driven Kilometers: ");
    scanf("%d", &d3.distance);

    printf("\n******Printing Drivers Details******\n");
    printf("\n#Details of Driver 1\n");
    printf("Name: %s\n", d1.name);
    printf("address: %s\n", d1.address);
    printf("License Number: %s\n", d1.license);
    printf("Road Experience: %d km\n", d1.distance);

    printf("\n#Details of Driver 2\n");
    printf("Name: %s\n", d2.name);
    printf("address: %s\n", d2.address);
    printf("License Number: %s\n", d2.license);
    printf("Road Experience: %d km\n", d2.distance);

    printf("\n#Details of Driver 3\n");
    printf("Name: %s\n", d3.name);
    printf("address: %s\n", d3.address);
    printf("License Number: %s\n", d3.license);
    printf("Road Experience: %d km\n", d3.distance);

    return 0;
}
