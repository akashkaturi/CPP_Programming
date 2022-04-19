//Not passed test cases

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
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int k;
            cin >> k;
            v.push_back(k);
        }
        while (v.size() >= 1)
        {
            sort(v.begin(), v.end());

            for (size_t i = 1; i < v.size(); i++)
            {
                v[i - 1] = abs(v[i] - v[i - 1]);
            }
            v.pop_back();
        }

        cout << v[0] << endl;
    }

    return 0;
}