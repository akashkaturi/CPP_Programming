// Not passed test cases
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
        int a, b, p, q;
        cin >> a >> b >> p >> q;
        if (a == p && b == q)
        {
            cout << 0 << endl;
        }
        else if ((a + b) % 2 == 0 && (p + q) % 2 == 0)
        {
            cout << 2 << endl;
            continue;
        }
        else
        {
            cout << 1 << endl;
            continue;
        }
    }

    return 0;
}