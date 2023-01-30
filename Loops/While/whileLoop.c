#include<stdio.h>
int main()
{
    int number, index=0;
    printf("Enter the number:\n");
    scanf("%d",&number);
    while (index<number)
    {
        printf("%d\n",index);
        index=index+1;
    }
    return(0);
    
}