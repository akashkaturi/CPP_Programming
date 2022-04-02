#include <stdio.h>
typedef struct rectangle
{
    int length;
    int breadth;
} rectangle;
void nothing(int *x)
{
    printf("%d\n", *x);
}
void hello(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}
void area(rectangle *r)
{
    printf("%d ", r->length * r->breadth);
    r->length++;
}

int main()
{
    int a = 10;
    printf("%d\n", a);
    // pointers are used to store the addresses of another variables.
    int *p;
    p = &a;             // referencing
    printf("%d\n", *p); // dereferencing.
    nothing(&a);
    int arr[10] = {1, 2, 3, 4, 5};
    hello(arr, 5);
    rectangle r = {2, 5};
    area(&r);
    printf("\n");
    printf("%d", r.length);
    return 0;
}