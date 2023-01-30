#include <stdio.h>
int main()
{
    int a = 22;
    int *ptra = &a;
    int *ptrb;
    int *ptrc = NULL;
    printf("\nThe value of a: %d", a);
    printf("\nThe value of a: %d", *ptra);
    printf("\nThe address of pointer to a: %p", ptra); //%p is pointer specifier
    printf("\nThe address of a: %p", &a);
    printf("\nThe address of a: %p", a);
    printf("\nThe address of a pointer without any assinged value: %p", ptrb);
    printf("\nThe address of a pointer which asssinged null: %p", ptrc);

    return 0;
}