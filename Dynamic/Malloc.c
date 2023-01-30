#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, *ptr;
    printf("Enter the number of integers you want to enter: ");
    scanf("%d", &n);
    ptr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("\nEnter the numbers %d: ", i);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("\n The integer at position %d is: %d", i, ptr[i]);
    }

    return 0;
}