#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void find_pairs(vector<int> v, int k)
{
    vector<pair<int, int>> ans;
    unordered_map<int, int> map;
    int count = 0;
    for (auto i : v)
    {
        map[i]++;
    }
    for (auto x : map)
    {
        if (k == 0)
        {
            if (x.second > 1)
            {
                count++;
                ans.push_back(pair(x.first + k, x.first));
            }
        }
        else if (map.find(x.first + k) != map.end())
        {
            count++;
            ans.push_back(pair(x.first + k, x.first));
        }
    }
    cout << "No of pairs are: " << count << endl;
    cout << "The given pairs are: " << endl;
    for (auto x : ans)
    {
        cout << "(" << x.first << "," << x.second << ")" << endl;
    }
}
int main()
{
    vector<int> v;
    int num;
    int k;
    cin >> k;
    while (cin >> num)
    {
        v.push_back(num);
    }
    for (auto x : v)
    {
        cout << x << endl;
    }

    find_pairs(v, k);
    return 0;
}

/*
Input:


Output:


Explanation:

*/