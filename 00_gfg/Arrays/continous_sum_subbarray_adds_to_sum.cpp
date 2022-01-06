#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector<int> find_target(vector<int> &v, int target)
{
    int i = 0, j = 0;
    vector<int> ans;
    int n = v.size();
    int sum = 0;
    unordered_map<int, int> m;
    for (int i = 0; i < v.size(); i++)
    {
        int temp = target - v[i];
        if (m.find(temp) != m.end())
    {
            ans.push_back(m[temp] + 1);
            ans.push_back(i + 1);
            return ans;
        }
        else
        {
            m[v[i]] = i;
        }
    }
    return ans;
}
int main()
{
    // vector<int> v;
    // int n;
    // while (cin >> n)
    // {
    //     v.push_back(n);
    // }
    // int target = 12;
    // vector<int> ans = find_target(v, target);
    // for (auto x : ans)
    // {
    //     cout << x << " ";
    // }
    string name;
    cin>>name;
    cout<<"Hey "<<name<<endl;
     return 0;

}

/*
Input:


Output:


Explanation:

*/