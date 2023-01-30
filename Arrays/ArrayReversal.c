#include <stdio.h>
int ArrRev(int *array)
{
    int temp;
    for (int i = 0; i < 7 / 2; i++)
    {
        temp = array[i];
        array[i] = array[6 - i];
        array[6 - i] = temp;
    }

    return 0;
}

int Arrprint(int *array2)
{
    for (int i = 0; i < 7; i++)
    {
        printf("\nThe value of element in position %d is %d", i, array2[i]);
    }

    return 0;
}

int main()
{
    int Arr1[] = {2, 4, 5, 7, 8, 9, 11};
    printf("\nThe array before reversal\n");
    Arrprint(Arr1);
    ArrRev(Arr1);
    printf("\n\nThe array after reversal\n");
    Arrprint(Arr1);

    return 0;
}