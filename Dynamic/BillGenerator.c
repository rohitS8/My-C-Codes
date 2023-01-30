#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int stringchange(const char *string, const char *oldword, const char *newword)
{
    int i, count = 0;
    char *resultstring;

    int oldwordlength = strlen(oldword);
    int newwordlength = strlen(newword);

    for (int i = 0; string[i] != '\0'; i++)
    {
        if (strstr(&string[i], oldword) == &string[i])
        {
            count++;
            i = i + oldwordlength - 1;
        }
    }

    resultstring = (char *)malloc(i + (newwordlength - oldwordlength) - 1);
    i = 0;

    while (*string)
    {
        if (strstr(string, oldword) == string)
        {
            strcpy(&resultstring[i], newword);
            i += 1;
            string += 1;
        }

        resultstring[i] = '\0';
        return resultstring;
    }
}

int main()
{
    FILE *ptr = NULL;
    FILE *ptr2 = NULL;

    char string[200];
    char *newstring;

    ptr = fopen("BillFile.txt", "r");
    ptr = fopen("GenBillFile.txt", "w");

    fgets(string, 200, ptr);
    printf("The given bill is: %s", string);

    newstring = stringchange(string, "{{item}}", "Table Fan");
    newstring = stringchange(newstring, "{{outlet}}", "Ram Laxmi fan outlet");
    newstring = stringchange(newstring, "{{name}}", "Rohit");

    printf("The generated bill is: %s", newstring);
    fprintf(ptr2, "%s", newstring);

    fclose(ptr);
    fclose(ptr2);

    return 0;
}