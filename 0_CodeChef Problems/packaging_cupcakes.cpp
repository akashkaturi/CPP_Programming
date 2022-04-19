
// passed test cases
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
long leftover(long n)
{
    long ans = (n / 2) + 1;
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        long n;
        cin >> n;
        cout << leftover(n) << endl;
    }

    return 0;
}