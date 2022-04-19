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
        string s;
        cin >> s;
        unordered_map<char, int> map;
        for (auto i : s)
        {
            map[i]++;
        }
        bool ans = true;
        for (auto i : map)
        {
            if (i.second % 2 != 0)
            {
                ans = false;
            }
        }

        ans == true ? cout << "YES" << endl : cout << "NO" << endl;
    }

    return 0;
}