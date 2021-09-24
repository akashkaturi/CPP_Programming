#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void add(vector<int> v)
{
    vector<int> nv;
    int sum = v[0];
    for (int i = 1; i < v.size(); i++)
    {
        sum += v[i];
        nv.push_back(sum);
    }
    int j = 0;
    int new_sum = v[0];
    for (int i = 1; i < v.size() && j < nv.size(); i++)
    {
        if (new_sum + v[i] <= nv[j])
        {
            new_sum += v[i];
            cout << new_sum << " ";
            j += 1;
        }
    }
    // for (auto x : nv)
    // {
    //     cout << x << " ";
    // }
    cout << new_sum;
}
int main()
{
    vector<int> v;
    int n;
    while (cin >> n)
    {
        v.push_back(n);
    }
    // for (auto x:v){
    //     cout << x << " ";
    // }
    add(v);
    return 0;
}

/*
Input:


Output:


Explanation:

*/