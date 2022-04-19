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
        int w1, w2, x1, x2, months;
        cin >> w1 >> w2 >> x1 >> x2 >> months;
        int min = x1 * months, max = x2 * months;
        if (w2 - w1 >= min && w2 - w1 <= max)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }

    return 0;
}