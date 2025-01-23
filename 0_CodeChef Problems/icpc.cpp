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
    unordered_map<int, int> map;
    for (int i = 1; i <= 7; i++)
    {
        map[i] = 1;
    }
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (map.find(v[i]) != map.end())
            {
                count = i+1;
            }
        }

        cout << count << endl;
    }

    return 0;
}