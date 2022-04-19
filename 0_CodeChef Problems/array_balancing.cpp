#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n], b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (a[i] < b[i])
            {
                swap(a[i], b[i]);
            }
        }
        int sumu = 0;
        int sum2 = 0;
        for (int i = 1; i < n; i++)
        {
            sumu = sumu + abs(a[i] - a[i - 1]);
        }
        for (int i = 1; i < n; i++)
        {
            sum2 += abs(b[i - 1] - b[i]);
        }

        cout << sumu + sum2 << endl;
    }

    return 0;
}