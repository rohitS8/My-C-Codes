#include<stdio.h>
int main()
{
    int value[10];
     for (int i = 1; i <11; i++)
    {
        printf("\nEnter your No. %d value: ",i);
        scanf("%d", &value[i]);
    }
    for (int i = 1; i <11; i++)
    {
        printf("Your No. %d value is: %d\n",i,value[i]);
    }
 return 0;   
}