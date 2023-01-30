#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 0, n;
    char *ptr;

    while (i < 3)
    {
        printf("\nEmployee %d: Enter the length of employee ID: ", i + 1);
        scanf("%d", &n);
        ptr = (char *)malloc((n + 1) * sizeof(char));
        printf("\nEnter Employee ID: ");
        scanf("%s", ptr);
        printf("\nEmployee ID of Employee %d: %s", i + 1, ptr);
        free(ptr);

        i = i + 1;
    }

    return 0;
}
