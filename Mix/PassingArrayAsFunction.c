#include <stdio.h>

int func1(int arra1[])
{
    for (int i = 0; i < 4; i++)
    {
        printf("The value of array at place %d is %d\n", i, arra1[i]);
    }
    arra1[1] = 10; // we can also change value from here,because we are passing the address of the array
    return 0;
}

int func2(int *ptr)
{
    for (int i = 0; i < 4; i++)
    {
        printf("The value of array at place %d is %d\n", i, *(ptr + i));
    }
    *(ptr + 3) = 49; // we can also change value from here

    return 0;
}

int func3(int arra2[2][2])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("The value of array at place %d,%d is %d\n", i, j, arra2[i][j]);
        }
    }
}

int main()
{
    int arr1[] = {23, 44, 42, 35}, arr2[] = {6, 9, 80, 56}, arr3[2][2] = {{12, 10}, {13, 15}};

    func1(arr1);
    func1(arr1); // this will print the changed value

    func2(arr2);
    func2(arr2); // this will print the changed value

    func3(arr3);

    return 0;
}