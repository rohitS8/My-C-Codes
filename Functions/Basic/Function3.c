#include <stdio.h>
int sum(int A, int B); // declaring the function (Prototype)
void starprint()
{
    int d;
    printf("\nHow many stars you want to print?\n");
    scanf("%d", &d);
    for (int i = 0; i < d; i++)
    {
        printf("*");
    }
}
int main()
{
    int A, B, C;
    printf("\nEnter A: ");
    scanf("%d", &A);
    printf("\nEnter B: ");
    scanf("%d", &B);
    C = sum(A, B);
    printf("\nThe Answer: %d", C);
    starprint();
    return 0;
}

int sum(int A, int B)
{
    return A + B;
}