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
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int positive = 0, negative = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > 0)
            {
                positive++;
            }
            else if (arr[i] < 0)
            {
                negative++;
            }
        }
        int ans;
        ans = ((positive * (positive - 1)) / 2) + ((negative * (negative - 1)) / 2);
        cout << ans << endl;
    }

    return 0;
}