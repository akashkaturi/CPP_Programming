#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int fibonacci(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}
int main()
{
    int n;
    cin >> n;
    cout << fibonacci(n) << endl;
    int c=1,b=2,a=2;
    c += a < b++ ? a : b;
    int k[3] = {1, 2, 3};
    cout << (k + 2)[1];

    return 0;
}