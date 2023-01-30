#include <stdio.h>
int main()
{
    printf("The current time is: %s\n", __TIME__);
    printf("Today's date is: %s\n", __DATE__);
    printf("The file name is: %s\n", __FILE__);
    printf("The line number is: %d\n", __LINE__);
    printf("ANSI: %d\n", __STDC__);

    return 0;
}