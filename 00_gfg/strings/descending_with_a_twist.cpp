#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void desc(vector<int> v)
{
    vector<int> result;
    vector<unordered_map<int, int>> map;
    unordered_map<int, int> m;

    for (int i = 0; i < v.size(); i++)
    {
        m[v[i]] += 1;
    }
    vector<int> ans;
    for (auto c : m)
    {
        cout << c.first << " " << c.second << endl;
        ans.push_back(c.first);
    }
    for (auto k : ans)
    {
        cout << k << " ";
    }
}
int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 5, 3, 3};
    desc(v);
    return 0;
}

/*
Input:


Output:


Explanation:

*/