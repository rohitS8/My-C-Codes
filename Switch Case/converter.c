#include <stdio.h>
int main()
{
    int input;
    float value;

    while (1)
    {
        printf(" \nWelcome to Converter \n\n1.Kilometer to Mile\n2.Inch to foot\n3.Centimeter to inch\n4.Pound to Kilogram\n5.Inch to meter\n6.Quit the program\n\nEnter Your Choice: ");
        scanf("%d", &input);

        switch (input)
        {
        case 1:
            printf("\nEnter the value: ");
            scanf("%f", &value);
            printf("\n %.2f Kilometer = %f Mile\n\n", value, 0.621371 * value);
            break;
        case 2:
            printf("\nEnter the value: ");
            scanf("%f", &value);
            printf("\n %.2f Inch = %f foot\n\n", value, 0.0833333 * value);
            break;
        case 3:
            printf("\nEnter the value: ");
            scanf("%f", &value);
            printf("\n %.2f Centimeter = %f Inch\n\n", value, 0.0328084 * value);
            break;
        case 4:
            printf("\nEnter the value: ");
            scanf("%f", &value);
            printf("\n %.2f Pound = %f Kilogram\n\n", value, 0.453592 * value);
            break;
        case 5:
            printf("\nEnter the value: ");
            scanf("%f", &value);
            printf("\n %.2f Inch = %f Meter\n\n", value, 0.0254 * value);
            break;
        case 6:
            printf("Quitting the program...\n\n");
            goto end;
            break;

        default:
            printf("\n Invalid inputs\n\n");
        }
    }
end:

    return 0;
}
