#include<stdio.h>
int sum(int A,int B)
{
    return A + B;
}
int main()
{
    int A,B,C;
    printf("\nEnter A:");
    scanf("%d",&A);
    printf("\nEnter B:");
    scanf("%d",&B);
    C= sum(A,B);
    printf("\nThe Answer: %d",C);

    return 0;
}