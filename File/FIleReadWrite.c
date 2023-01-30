#include <stdio.h>
int main()
{
    FILE *ptr = NULL;
    char string1[60];
    char string2[30] = "Welcome to my file";

    ptr = fopen("TestFile.txt", "r");
    fscanf(ptr, "%s", string1);
    printf("The content of the file is: %s\n", string1);

    ptr = fopen("TestFile1.txt", "w");
    fprintf(ptr, "%s", string2);

    ptr = fopen("TestFile1.txt", "a");
    fprintf(ptr, "%s", string2);

    return 0;
}