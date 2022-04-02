#include <stdio.h>
#include <stdlib.h>

int add(int *x, int *y)
{
    // x,y- formal parameters
    int c = *x + *y;
    *x += 1;
    *y += 1;
    return c;
}
int add_call_by_value(int x, int y)
{
    return x + y;
}
void add(int x, int y)
{
    printf("%d", x + y);
}

int main()
{
    // function_name(parameters);
    // actual parameters.
    int a = 5;
    int b = 3;
    printf("%d %d\n", a, b);
    int ans = add(&a, &b);
    printf("%d\n", ans);
    printf("%d %d\n", a, b);
    printf("%d\n", add_call_by_value(a, b));
    add(a, b);

    return 0;
}