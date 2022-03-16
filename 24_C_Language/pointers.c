#include <stdio.h>
int main()
{
    int a = 10;
    printf("%d\n", a);
    // pointers are used to store the addresses of another variables.
    int *p;
    p = &a;           // referencing
    printf("%d", *p); // dereferencing.
    return 0;
}