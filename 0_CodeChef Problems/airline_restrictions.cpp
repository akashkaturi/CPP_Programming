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
        int a, b, c, sum, hand;
        cin >> a >> b >> c >> sum >> hand;

        if (a + b <= sum && c <= hand || b + c <= sum && a <= hand || c + a <= sum && b <= hand)

        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}