// passed test cases
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
        long n, k;
        cin >> n >> k;
        long arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        long total = 0;
        long i = 0;
        for (i = 0; i < n; i++)
        {
            total += arr[i];
            if (total >= k)
            {
                total -= k;
                continue;
            }
            else
            {
                cout << "NO " << i + 1 << endl;
                break;
            }
        }
        if (i == n)
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}