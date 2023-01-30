#include <stdio.h>

void printstring(char str[])
{
    int i;
    while (str != '\0')
    {
        printf("%c", str[i]);
        i++;
    }
}

int main()
{
    char str1[] = {'R', 'O', 'H', 'I', 'T', '\0'};
    char string[] = "ROHIT";
    char str[20];
    char str2[10];
    gets(str);
    printf("%s\n", str1);
    printf("%s\n", string);
    printf("%s\n", str);
    printstring(str2); // this one and gets are working same

    return 0;
}