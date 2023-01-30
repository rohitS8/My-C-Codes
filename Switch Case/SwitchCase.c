#include <stdio.h>
int main()
{
    int a, b, d;
    char c;
    printf("\n Enter your oparand between (+,-,*,/): \t");
    scanf("%c", &c);
    printf("\n Enter the numbers:\t");
    scanf("%d"
          "%d",
          &a, &b);

    switch (c)
    {
    case '+':
        d = a + b;
        printf("\n The addition of your inputs: %d", d);
        break;
    case '-':
        d = a - b;
        printf("\n The substraction of your inputs: %d", d);
        break;
    case '*':
        d = a * b;
        printf("\n The multiplication of your inputs: %d", d);
        break;
    case '/':
        d = a / b;
        printf("\n The division of your inputs: %d", d);
        break;

    default:
        printf("\n Invalid inputs");
    }
    return 0;
}