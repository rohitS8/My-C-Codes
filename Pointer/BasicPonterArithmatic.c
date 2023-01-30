#include <stdio.h>
int main()
{
    int a = 45;
    char b = '9';
    int *ptra = &a;
    char *ptrb = &b;
    printf("%d\n", ptra);
    printf("%d\n", ptra+2); //here int is 4 byte in my architecture
    printf("%d\n", ptra-2);
    ptra++;
    printf("%d\n", ptra);
    ptra--;
    printf("%d\n", ptra);
    printf("\n\n%d\n", ptrb);
    printf("%d\n", ptrb + 2);
    printf("%d\n", ptrb - 2);
    ptrb++;
    printf("%d\n", ptrb);
    ptrb--;
    printf("%d\n", ptrb);

    return 0;
}