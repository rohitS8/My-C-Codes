#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, *ptr;
    printf("\nEnter the number of integers you want to enter: ");
    scanf("%d", &n);
    ptr = (int *)calloc(n, sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("\nEnter the numbers %d: ", i);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("\n The integer at position %d is: %d", i, ptr[i]);
    }

    printf("Enter the new number of integers you want to enter: ");
    scanf("%d", &n);
    ptr = (int *)realloc(ptr, n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        printf("\nEnter the numbers %d: ", i);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("\n The integer at position %d is: %d", i, ptr[i]);
    }

    free(ptr);

    return 0;
}
