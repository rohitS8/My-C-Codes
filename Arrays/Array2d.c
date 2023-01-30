#include<stdio.h>
int main()
{
    int value[3][4];
     for (int i = 0; i <3; i++)
    {
    for (int j = 0; j <4; j++)
    {
        printf("\nEnter Values: ");
        scanf("%d",&value[i][j]);
    }
    }
    printf("\n\n");
    for (int i = 0; i <3; i++)
    {
    for (int j = 0; j <4; j++)
    {
        printf("%d\t", value[i][j]);
    }
    printf("\n");
    }
 
 return 0;   
}