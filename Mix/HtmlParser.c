#include <stdio.h>
#include <string.h>

void parser(char *string)
{
    int input = 0;
    int index = 0;
    for (int i = 0; i < strlen(string); i++)
    {
        if (string[i] == '<')
        {
            input = 1;
            continue;
        }
        else if (string[i] == '>')
        {
            input = 0;
            continue;
        }
        if (input == 0)
        {
            string[index] = string[i];
            index++;
        }
    }
    string[index] = '\0';
    
    while (string[0] == ' ')
    {
        for (int j = 0; j < strlen(string); j++)
        {
            string[j] = string[j + 1];
        }
    }
    while (string[strlen(string) - 1] == ' ')
    {
        string[strlen(string) - 1] = '\0';
    }
}

int main()
{
    char string[200];
    printf("Enter the html string: ");
    gets(string);
    parser(string);
    printf("\nThe parsed string is: %s", string);

    return 0;
}