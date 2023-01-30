#include <stdio.h>
#include <string.h>
int main()
{
    char s1[10], s2[10], s3[20];
    printf("Enter two words: \n");
    gets(s1);
    gets(s2);

    printf("Length of the string 1: %d\n", strlen(s1));
    printf("Length of the string 2: %d\n", strlen(s2));
    puts(strcat(s1, s2));
    printf("Reverse of the string:");
    puts(strrev(s1));
    printf("The new string is: ");
    strcpy(s3, (strcat(s1, s2)));
    puts(s3);

    return 0;
}