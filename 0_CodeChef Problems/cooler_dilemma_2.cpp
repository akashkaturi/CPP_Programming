#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        long long x, y;
        cin >> x >> y;
        if (y % x != 0)
        {
            cout << y / x << endl;
        }
        else
        {
            cout << (y / x) - 1 << endl;
        }
    }
    return 0;
}