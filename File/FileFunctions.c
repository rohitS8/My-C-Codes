#include<stdio.h>
int main()
{
    FILE *ptr = NULL;
    FILE *ptr2 =NULL;
    ptr=fopen("FileFunction.txt","r+");
    ptr2 =fopen("FileFunction.txt","a");
    char c=fgetc(ptr);
    printf("The word I read from file is %c\n",c);
    char str[30];
    fgets(str,10,ptr);
    printf("The string I read from file is %s\n",str);
    fputc('O',ptr2);
    fputs("I am Rohit",ptr2);

    fclose(ptr);

return 0;
}