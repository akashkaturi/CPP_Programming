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
        unordered_map<int, int> map;
        for (int i = 0; i < n; i++)
        {
            int p, sc;
            cin >> p >> sc;
            if (p <9)
                map[p] = max(sc, map[p]);
        }
        int ans = 0;

        for (auto i : map)
        {
            ans += i.second;
        }
        cout << ans << endl;
    }

    return 0;
}