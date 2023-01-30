#include <stdio.h>
int main()
{
    int choice;
    for (int i = 0; i < 10; i++)
    {
        printf("\n%d\n", i);
        for (int j = 0; j < 10; j++)
        {
            printf("\nEnter the value (Press 0 to exit):\t");
            scanf("%d", &choice);
            if (choice == 0)
            {
                goto end;
            }
        }
    }
end:
    return (0);
}