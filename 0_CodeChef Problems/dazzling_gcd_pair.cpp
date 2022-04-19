// Not passed test cases
// passed test cases
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
long gcd(long a, long b)
{
    return b == 0 ? a : gcd(b, a % b);
}
void pairs(long a, long b)
{
    for (int i = a + 1; i < b; i++)
    {
        if (gcd(a, i) > 1)
        {
            cout << a << " " << i << endl;
            return;
        }
    }
    cout << -1 << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        long a, b;
        cin >> a >> b;
        pairs(a, b);
    }
    &&return 0;
}