#include <stdio.h>
int main()
{
    int a, b, i, n, sum[100];
    scanf("%d", &n);
    sum[0] = 0;
    sum[1] = 1;
    for (i = 2; i <= n; i++)
    {
        sum[i] = sum[i-1] + sum[i-2];
    }
    printf("%d", sum[n]);

    return 0;
}